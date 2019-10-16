import java.util.Scanner;

public class week {

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		int day, month, year, total, remainder;
		
		System.out.println("Please enter a date in this format: Day, Month, Year (Example: 12 3 2020)");
		day = keyboard.nextInt();
		month = keyboard.nextInt();
		year = keyboard.nextInt();
		
		System.out.println(day + " " + month + " " + year);	
		isLeapYear(year);
		getCenturyValue(year);
		getYearValue(year);
		getMonthValue(month, year);
		
		System.out.println(isLeapYear(year));
		System.out.println(getCenturyValue(year));
		System.out.println(getYearValue(year));
		System.out.println(getMonthValue(month, year));
		
		total = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
		remainder = total % 7;
		
		if (remainder == 0) {
			System.out.println("That day of the week is a Sunday");
		} else if (remainder == 1) {
			System.out.println("That day of the week is a Monday");
		} else if (remainder == 2) {
			System.out.println("That day of the week is a Tuesday");
		} else if (remainder == 3) {
			System.out.println("That day of the week is a Wednesday");
		} else if (remainder == 4) {
			System.out.println("That day of the week is a Thursday");
		} else if (remainder == 5) {
			System.out.println("That day of the week is a Friday");
		} else if (remainder == 6) {
			System.out.println("That day of the week is a Saturday");
		}
		
		
		System.out.println(total);
	}
	
	public static boolean isLeapYear(int year) {
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
			return true; 
		} else {
			return false;
		}
		
	}
	
	public static int getCenturyValue(int year) {
		int remainder, minus, times;
		int digit = Integer.parseInt(Integer.toString(year).substring(0, 2));
		remainder = digit % 4;
		minus = 3 - remainder;
		times = minus * 2;
		
		return times;
		
	}
	
	public static int getYearValue(int year) {
		int digit = Integer.parseInt(Integer.toString(year).substring(2, 4));
		return digit / 4 + digit;
	}
	
	public static int getMonthValue(int month, int year) {
		
		if (month == 1 && isLeapYear(1) == false) {
			return 0;
		} else if (month == 1 && isLeapYear(0) == true){
			return  6;
		} else if (month == 2 && isLeapYear(1) == false){
			return 3;
		} else if (month == 2 && isLeapYear(0) == true){
			return 2;
		} else if (month == 3) {
			return 3;
		} else if (month == 4) {
			return 6;
		} else if (month == 5) {
			return 1;
		} else if (month == 6) {
			return 4;
		} else if (month == 7) {
			return 6;
		} else if (month == 8) {
			return 2;
		} else if (month == 9) {
			return 5;
		} else if (month == 10) {
			return 0;
		} else if (month == 11) {
			return 3;
		} else if (month == 12) {
			return 5;
		} else {
			return month;
		}
	}

	
}
