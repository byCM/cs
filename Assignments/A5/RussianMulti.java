import java.util.Scanner;

public class RussianMulti {

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		int a;
		int b;
		
		System.out.println("Enter the first Positive integer: ");	
		a = keyboard.nextInt();
		
		while (a <=0) {
			System.out.println(a + " is negative, please enter a positive integer! ");
			a = keyboard.nextInt();
		}
		
		System.out.println("Enter the second positive integer: ");
		b = keyboard.nextInt();
		
		while (b <=0) {
			System.out.println(b + " is negative, please enter a positive integer! ");
			b = keyboard.nextInt();
		}

		int result = multiplication(a, b);
        System.out.println(a + " * " + b + " = " + result);
	}
	
	public static int multiplication(int a, int b) {
		if (a == 1) {
			return b;
		}
		
		int temp = multiplication(a / 2, b * 2);
        if (a % 2 != 0) {
            temp += b;
        }

        return temp;
	}

}
