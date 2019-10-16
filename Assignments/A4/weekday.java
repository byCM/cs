import java.util.Scanner;

public class week {

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		int day, month, year;
		
		System.out.println("Please enter a date in numbers only (EX: 12 3 2020)");
		day = keyboard.nextInt();
		month = keyboard.nextInt();
		year = keyboard.nextInt();
		
		System.out.println(day + " " + month + " " + year);	
		isLeapYear(year);
		getCenturyValue(year);

	}
	
	public static boolean isLeapYear(int year) {
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
			return true; 
		} else {
			return false;
		}
		
	}
	
	public static void getCenturyValue(int year) {
		int century;
		int f = Integer.parseInt(Integer.toString(year).substring(0, 2));
		century = f / 4;
		System.out.println(f + " "+ century);
		
	}
	

	
}
