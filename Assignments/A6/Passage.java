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
		System.out.println("Room A");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 's') {
			roomB(direction);
		} else if (direction == 'e') {
			roomC(direction);
		}
	}

	public static void roomB(char direction) {
		System.out.println("Room B");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 'n') {
			roomA(direction);
		} else if (direction == 's') {
			roomE(direction);
		} else if (direction == 'e') {
			roomC(direction);
		}
	}
	
	public static void roomC(char direction) {
		System.out.println("Room C");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 'n') {
			roomA(direction);
		} else if (direction == 's') {
			roomB(direction);
		} else if (direction == 'e') {
			roomD(direction);
		}
		
	}
	
	public static void roomF(char direction) {
		System.out.println("Game over, you are in the Wumpuses lair");
		
	}
	
	public static void roomD(char direction) {
		System.out.println("Room D");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 'n') {
			roomF(direction);
		} else if (direction == 's') {
			roomE(direction);
		} else if (direction == 'e') {
			roomG(direction);
		} else if (direction == 'w') {
			roomC(direction);
		}
		
	}
	
	public static void roomE(char direction) {
		System.out.println("Room E");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North East West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 'n') {
			roomD(direction);
		} else if (direction == 'w') {
			roomB(direction);
		} else if (direction == 'e') {
			roomH(direction);
		}
	}
	
	public static void roomG(char direction) {
		System.out.println("Room G");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: South West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 's') {
			roomH(direction);
		} else if (direction == 'w') {
			roomD(direction);
		}
		
	}
	
	public static void roomH(char direction) {
		System.out.println("Room H");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North East West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		if (direction == 'n') {
			roomG(direction);
		} else if (direction == 'w') {
			roomD(direction);
		} else if (direction == 'e') {
			roomI(direction);
		}
		
		
	}
	
	public static void roomI(char direction) {
		System.out.println("You made it out alive!");
		
	}
	
	
}








