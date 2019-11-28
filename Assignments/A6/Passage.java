import java.util.Scanner;

public class Passage {
	
	public static void main(String[] args) {
		char direction = 0;
		int rooms[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
		int room = 1;
		
		System.out.println("Enter your direction to move as N, S, E, or W.");
		
		roomA(direction);
		
		/*
		 * Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		 While room != roomI
		 
		 */
		
	}
	
	public static void roomA(char direction) {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 's') {
			roomC();
		} else if (direction == 'e') {
			roomB();
		}
	}

	public static void roomB() {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East");
	}
	
	public static void roomC() {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East");
		
	}
	
	public void roomF(char direction) {
		System.out.println("Game over, you are in the Wumpuses lair");
		
	}
	
	public void roomD(char direction) {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East West");
		
	}
	
	public void roomE(char direction) {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North East West");
		
	}
	
	public void roomG(char direction) {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: South West");
		
	}
	
	public void roomH(char direction) {
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North East West");
		
	}
	
	public void roomI(char direction) {
		System.out.println("You made it out alive!");
		
	}
	
	
}








