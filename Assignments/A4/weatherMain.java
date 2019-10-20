import java.util.Arrays;

public class WeatherMain {
	
	String name = "Boston";
	static double latitude = 42.361145;
	static double longitude = -71.057083;
	
	String name2 = "Houston";
	static double latitude2 = 29.749907;
	static double longitude2 = -95.358421;
	
	public static String[] showWeatherForecast(double latitude, double longitude) {
	    String[] weather = WeatherQuery.getForecast(latitude, longitude);
		return weather;
	}
	
	public static String[] showWeatherForecast2(double latitude2, double longitude2) {
	    String[] weather = WeatherQuery.getForecast(latitude2, longitude2);
		return weather;
	}
	
	
	
	public static void main(String[] args) {
	    
	
		
		WeatherMain city1 = new WeatherMain();
		System.out.print(city1.name + " " + city1.latitude + " " + city1.longitude + " \n");	
		System.out.println(Arrays.toString((showWeatherForecast(latitude, longitude))) + "\n");
		
		WeatherMain city2 = new WeatherMain();
		System.out.print(city2.name2 + " " + city2.latitude2 + " " + city2.longitude2 + " \n");
		System.out.println(Arrays.toString((showWeatherForecast(latitude2, longitude2))));
		

		
		
/*				
 		String[] forecast1;
		String[] forecast2;

		forecast1 = WeatherQuery.getForecast(42.361145, -71.057083);
		System.out.println("Boston 42.361145, -71.057083");
		System.out.println(forecast1[0]);
		
		forecast2 = WeatherQuery.getForecast(29.749907, -95.358421);
		System.out.println("\nHouston 29.749907, -95.358421");
		System.out.println(forecast2[0]);
*/	
		

	}
}


