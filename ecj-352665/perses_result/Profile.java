

public class Profile
{
	private String name;
	private IDataProvider data;
	
	Profile(String name, IDataProvider data){
		this.name = name;
		this.data = data;
	}
	
	public String getName(){
		return name;
	}
	
	public void setName(String newName){
		ProfileManager.renameProfile(this, newName);
		name = newName;
	}
	
	public IDataProvider getData(){
		return data;
	}
}
