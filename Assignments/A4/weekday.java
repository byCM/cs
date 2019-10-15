import java.util.Scanner;

public class week {

	public static void main(String[] args) {
		getMonth();

	}
	
	static void getMonth() {
		Scanner keyboard = new Scanner(System.in);
		String day, month, year;
		
		System.out.println("Please enter a date in numbers only (EX: 12 3 2020)");
		day = keyboard.next();
		month = keyboard.next();
		year = keyboard.next();
		
		System.out.println(day + " " + month + " " + year);	
		
	}
	
	public static boolean isLeapYear(String year) {
		if year
		return false;
		
	}

}
