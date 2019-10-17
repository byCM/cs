
public class City {
	private String name;
	private double latitude;
	private double longitude;

	public double usercity() {
		return latitude;
	}
	
	City() {
		name = "Anchorage";
		latitude = 61.1912556;
		longitude = -149.8238687;
	}
	
	
	City (double B) {
		latitude = B;
	}

	public static void main(String[] args) {
		
		City input = new City (343.34);
		System.out.println("You" + input.usercity());


	}

}

