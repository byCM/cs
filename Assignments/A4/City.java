import java.util.Arrays;

public class City {
	private String name;
	private static double latitude;
	private static double longitude;

	
	public double userCityLat() {
		return latitude;
	}
	
	public double userCityLong() {
		return longitude;
	}
	
	public String userCityName() {
		return name;
	}
	
	
	City() {
		name = "Anchorage";
		latitude = 61.1912556;
		longitude = -149.8238687;
	}
	
	
	City (String A, double B, double C) {
		name = A;
		latitude = B;
		longitude = C;
	}
	
	public static String[] showWeatherForecast(double latitude, double longitude) {
	    String[] weather = WeatherQuery.getForecast(latitude, longitude);
		return weather;
	}

	

	public static void main(String[] args) {
		
		// Input your custom long/lat like this below. 
		// City input = new City ("Boston", 42.361145, -71.057083);
		
		City input = new City ();
		System.out.print(input.userCityName() + " ");
		System.out.print(input.userCityLat() + " ");
		System.out.print(input.userCityLong() + " ");
		
		System.out.println(Arrays.toString((showWeatherForecast(latitude, longitude))));
		
	}

}
