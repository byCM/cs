import java.util.Scanner;


public class bounce {

	public static void main(String[] args){
		int time = 0, bounce = 1, i;
		double height = 0;
		double velocity = 0;
		Scanner keyboard = new Scanner(System.in);
		
		System.out.println("Enter initial Velocity: ");
		velocity = keyboard.nextInt();

		while (velocity <=0) {
			System.out.println(velocity + " is negative, please enter a positive integer! ");
			velocity = keyboard.nextInt();
		}
		
		do{
			System.out.println("Time:  " + time + " Height:  " + height + " Velocity:  " + velocity);
			height += velocity;
			velocity -= 32;
			time++;
			
			if(height <= 0){
				System.out.println("\nBounce " + bounce + "\n");
				height *= -0.5;
				velocity = velocity * -0.5 - 32;
				bounce++;
			}

		}while(bounce <= 5 && bounce > 0);
	}
}


