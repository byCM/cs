import java.util.Scanner;

public class RussianMulti {

	public static void main(String[] args) {
		int a;
		int b;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.println("Enter the first Positive integer: ");	
		a = keyboard.nextInt();
		
		while (a <= 0) {
			System.out.println(a + " is negative, please enter a positive integer! ");
			a = keyboard.nextInt();
		}
		
		System.out.println("Enter the second positive integer: ");
		b = keyboard.nextInt();
		
		while (b <= 0) {
			System.out.println(b + " is negative, please enter a positive integer! ");
			b = keyboard.nextInt();
		}
		
		keyboard.close();

		int result = multiplication(a, b);
        System.out.println(a + " * " + b + " = " + result);
	}
	
	public static int multiplication(int a, int b) {
		if (a == 1) {
			return b;
		}
		
		int c = multiplication(a / 2, b * 2);
        if (a % 2 != 0) {
            c += b;
        }

        return c;
        
	}

}
