import java.util.Scanner;

public class week {

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		int day, month, year, total;
		
		System.out.println("Please enter a date in numbers only (EX: 12 3 2020)");
		day = keyboard.nextInt();
		month = keyboard.nextInt();
		year = keyboard.nextInt();
		
		System.out.println(day + " " + month + " " + year);	
		isLeapYear(year);
		getCenturyValue(year);
		getYearValue(year);
		getMonthValue(month, year);
		
		System.out.println(isLeapYear(year));
		
		total = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
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
		int century, remainder, minus, times;
		int digit = Integer.parseInt(Integer.toString(year).substring(0, 2));
		century = digit / 4;
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
		
		if (month == 1 && isLeapYear(0) == false) {
			return 0;
		} else if (month == 1 && isLeapYear(0) == true){
			return  6;
		} else if (month == 2 && isLeapYear(0) == false){
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
