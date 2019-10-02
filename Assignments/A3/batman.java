import java.util.Scanner;

public class bounce {

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		int number = 1000;
		
		
		for (int i = 1000; i < 9999; i++) {
			int firstDigit = Integer.parseInt(Integer.toString(i).substring(0, 1));
			int secondDigit = Integer.parseInt(Integer.toString(i).substring(1, 2));
			int thirdDigit = Integer.parseInt(Integer.toString(i).substring(2, 3));
			int fourthDigit = Integer.parseInt(Integer.toString(i).substring(3, 4));

			
			if (firstDigit != secondDigit && firstDigit != thirdDigit && firstDigit != fourthDigit
					&& secondDigit != firstDigit && secondDigit != thirdDigit && secondDigit != fourthDigit
					&& thirdDigit != firstDigit && thirdDigit != secondDigit && thirdDigit != fourthDigit
					&& fourthDigit != firstDigit && fourthDigit != secondDigit && fourthDigit != thirdDigit && fourthDigit == secondDigit * 3 
					&& firstDigit + secondDigit + thirdDigit + fourthDigit == 27 && fourthDigit % 2 == 1) {
				System.out.println(firstDigit + "" + secondDigit + "" + thirdDigit + "" + fourthDigit);
			} 

			
		}
	}

}


/*
if (fourthDigit % 2 == 0) {
}
else if (firstDigit != secondDigit && firstDigit != thirdDigit && firstDigit != fourthDigit
		&& secondDigit != firstDigit && secondDigit != thirdDigit && secondDigit != fourthDigit
		&& thirdDigit != firstDigit && thirdDigit != secondDigit && thirdDigit != fourthDigit
		&& fourthDigit != firstDigit && fourthDigit != secondDigit && fourthDigit != thirdDigit) {
} 
else if (fourthDigit == secondDigit * 3) { 
}
else if (firstDigit + secondDigit + thirdDigit + fourthDigit == 27) {
	System.out.println(firstDigit + "" + secondDigit + "" + thirdDigit + "" + fourthDigit);
} 
*/
