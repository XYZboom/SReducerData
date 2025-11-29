import org.w3c.dom.Document;
import org.w3c.dom.NodeList;
                class ProfileManager
{
         static Document document;
 static{
   NodeList nodeList = document.getElementsByTagName("profile");
   for(int i = 0; i < nodeList.getLength();    ){
    String profileName =                                    "name"                ;
    String profilePath =                                    "path"                ;
    ProviderType profileType = null;
    ProfileInfo profileInfo = new ProfileInfo(profileName, profileType, profilePath);
   }
 }
         class ProfileInfo
 {
          ProfileInfo(String name, ProviderType type, String path){
  }
 }
}
