

import java.io.File;
import java.io.IOException;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.OutputKeys;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerConfigurationException;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.TransformerFactoryConfigurationError;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;

import org.w3c.dom.Attr;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NamedNodeMap;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

public abstract class ProfileManager
{
	private static final String LOCATION = 
		System.getProperty("user.home") + 
		System.getProperty("file.separator") + 
		".finance" + 
		System.getProperty("file.separator");
	private static final String CONFIG_FILE = LOCATION + "profiles.xml";
	
	private static Map<String, ProfileInfo> profiles;
	private static Collection<String> profilesNames;
	private static Document document;
	
	private static DocumentBuilder documentBuilder;
	private static DocumentBuilder getDocumentBuilder(){
		if(documentBuilder == null){
			try{
				documentBuilder = DocumentBuilderFactory.newInstance().newDocumentBuilder();
			}
			catch(ParserConfigurationException e){
				e.printStackTrace();
			}
		}
		return documentBuilder;
	}
	
	private static Transformer transformer;
	private static Transformer getTransfromer(){
		if(transformer == null){
			try{
				transformer = TransformerFactory.newInstance().newTransformer();
			}
			catch(TransformerConfigurationException e){
				e.printStackTrace();
			}
			catch(TransformerFactoryConfigurationError e){
				e.printStackTrace();
			}
		}
		return transformer;
	}
	
	static{
		File locationFile = new File(LOCATION);
		if(!locationFile.exists()){
			locationFile.mkdir();
		}
		File configFile = new File(CONFIG_FILE);
		if(!configFile.exists()){
			document = getDocumentBuilder().newDocument();
			document.appendChild(document.createElement("profiles"));
         writeDocument();
			profiles = new HashMap<String, ProfileInfo>(0);
			profilesNames = new HashSet<String>(0);
		}
		else{
			try{
				document = documentBuilder.parse(configFile);
			}
			catch(SAXException e){
				e.printStackTrace();
				System.exit(1);
			}
			catch(IOException e){
				e.printStackTrace();
				System.exit(1);
			}
			NodeList nodeList = document.getElementsByTagName("profile");
			profiles = new HashMap<String, ProfileInfo>(nodeList.getLength());
			profilesNames = new HashSet<String>(nodeList.getLength());
			for(int i = 0; i < nodeList.getLength(); i++){
				Node profileNode = nodeList.item(i);
				NamedNodeMap profileNodeAttributes = profileNode.getAttributes();
				String profileName = profileNodeAttributes.getNamedItem("name").getNodeValue();
				int providerType = Integer.parseInt(profileNodeAttributes.getNamedItem("type").getNodeValue());
				String profilePath = profileNodeAttributes.getNamedItem("path").getNodeValue();
				ProviderType profileType = null;
				if(providerType == 0){
					profileType = ProviderType.FILE_PROVIDER;
				}
				ProfileInfo profileInfo = new ProfileInfo(profileName, profileType, profilePath);
				profilesNames.add(profileName);
				profiles.put(profileName, profileInfo);
			}
		}
	}

	private static void writeDocument(){
		getTransfromer().setOutputProperty(OutputKeys.INDENT, "yes");
		DOMSource source = new DOMSource(document);
		StreamResult result = new StreamResult(CONFIG_FILE);
		try{
			getTransfromer().transform(source, result);
		}
		catch(TransformerException e){
			e.printStackTrace();
			System.exit(1);
		}
	}
	
	public static Profile createProfile(String name, IDataProvider provider){
		Profile newProfile = new Profile(name, provider);
		
		File profileFolder = new File(LOCATION + name + System.getProperty("file.separator"));
		profileFolder.mkdir(); 
		
		Node root = document.getChildNodes().item(0);
		Element newProfileElement = document.createElement("profile");
		Attr nameAttribute = document.createAttribute("name");
		nameAttribute.setNodeValue(newProfile.getName());
		Attr typeAttribute = document.createAttribute("type");
		typeAttribute.setNodeValue(String.valueOf(provider.getProviderType().getID()));
		Attr pathAttribute = document.createAttribute("path");
		typeAttribute.setNodeValue(profileFolder.getPath());
		newProfileElement.appendChild(nameAttribute);
		newProfileElement.appendChild(typeAttribute);
		newProfileElement.appendChild(pathAttribute);
		root.appendChild(newProfileElement);
		writeDocument();
		
		return newProfile;
	}

	public static void renameProfile(Profile profile, String newName){
		NodeList profilesNodes = document.getChildNodes().item(0).getChildNodes();
		for(int i = 0; i < profilesNodes.getLength(); i++){
			Node node = profilesNodes.item(i);
			Node nameAttribute = node.getAttributes().getNamedItem("name");
			if(nameAttribute.getNodeValue().equals(profile.getName())){
				nameAttribute.setNodeValue(newName);
				break;
			}
		}
		writeDocument();
	}
	
	/*public static Profile loadProfile(String name){
		
	}*/
	
	public static Collection<String> getProfileNames(){
		return profilesNames;
	}
	
	private class ProfileInfo
	{
		String name;
		ProviderType type;
		String path;
		
		private ProfileInfo(String name, ProviderType type, String path){
			this.name = name;
			this.type = type;
			this.path = path;
		}
	}
}
