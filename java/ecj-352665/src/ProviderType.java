

public enum ProviderType
{
	FILE_PROVIDER(0);

	int id; 
	
	private ProviderType(int id){
		this.id = id;
	}

	public int getID(){
		return id;
	}
}