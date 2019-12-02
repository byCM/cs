

import java.util.Scanner;

public class Passage {
	
	public static void main(String[] args) {
		char direction = 0;
		int rooms[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
		
		System.out.println("Enter your direction to move as N, S, E, or W.");
		
		roomA(direction);
		
	}
	
	public static void roomA(char direction) {
		System.out.println("Room A");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'S' && direction != 'E') {
			System.out.println(direction + " is not a valid option. Enter 'S' for South or 'E' for East.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'S') {
			roomB(direction);
		} else if (direction == 'E') {
			roomC(direction);
		}
	}

	public static void roomB(char direction) {
		System.out.println("Room B");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'N' && direction != 'S' && direction != 'E') {
			System.out.println(direction + " is not a valid option. Enter 'S' for South or 'E' for East or 'N' for North.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'N') {
			roomA(direction);
		} else if (direction == 'S') {
			roomE(direction);
		} else if (direction == 'E') {
			roomC(direction);
		}
	}
	
	public static void roomC(char direction) {
		System.out.println("Room C");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'N' && direction != 'S' && direction != 'E') {
			System.out.println(direction + " is not a valid option. Enter 'S' for South or 'E' for East or 'N' for North.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'N') {
			roomA(direction);
		} else if (direction == 'S') {
			roomB(direction);
		} else if (direction == 'E') {
			roomD(direction);
		}
		
	}
	
	public static void roomF(char direction) {
		System.out.println("\nYou Lose! you are in the Wumpuses lair.");
		
		System.out.println("\nPlay Again? Enter 'Y' for yes or 'N' for no.");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'Y' && direction != 'N') {
			System.out.println(direction + " is not a valid option. Enter 'Y' for Yes or 'N' for No.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'Y') {
			roomA(direction);
		} else if (direction == 'N'){
			System.exit(0);
		}

		
	}
	
	public static void roomD(char direction) {
		System.out.println("Room D");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North South East West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'N' && direction != 'S' && direction != 'E' && direction != 'W') {
			System.out.println(direction + " is not a valid option. Enter 'S' for South or 'E' for East or 'N' for North or 'W' for West.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'N') {
			roomF(direction);
		} else if (direction == 'S') {
			roomE(direction);
		} else if (direction == 'E') {
			roomG(direction);
		} else if (direction == 'W') {
			roomC(direction);
		}
		
	}
	
	public static void roomE(char direction) {
		System.out.println("Room E");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North East West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'N' && direction != 'W' && direction != 'E') {
			System.out.println(direction + " is not a valid option. Enter 'S' for South or 'E' for East or 'W' for West.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'N') {
			roomD(direction);
		} else if (direction == 'W') {
			roomB(direction);
		} else if (direction == 'E') {
			roomH(direction);
		}
	}
	
	public static void roomG(char direction) {
		System.out.println("Room G");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: South West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'S' && direction != 'W') {
			System.out.println(direction + " is not a valid option. Enter 'S' for South or 'W' for West.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'S') {
			roomH(direction);
		} else if (direction == 'W') {
			roomD(direction);
		}
		
	}
	
	public static void roomH(char direction) {
		System.out.println("Room H");
		System.out.println("You awaken in a maze of twisty little passages, all alike");
		System.out.println("You can go: North East West");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'N' && direction != 'W' && direction != 'E') {
			System.out.println(direction + " is not a valid option. Enter 'N' for North or 'W' for West or 'E' for East.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'N') {
			roomG(direction);
		} else if (direction == 'W') {
			roomD(direction);
		} else if (direction == 'E') {
			FinalRoom(direction);
		}
		
		
	}
	
	public static void FinalRoom(char direction) {
		System.out.println("You win! You made it out alive!");
		
		System.out.println("Play Again? Enter 'Y' for yes or 'N' for no.");
		
		Scanner keyboard = new Scanner(System.in);
		direction = keyboard.next().charAt(0);
		
		while (direction != 'Y' && direction != 'N') {
			System.out.println(direction + " is not a valid option. Enter 'Y' for Yes or 'N' for No.");
			direction = keyboard.next().charAt(0);
		}
		
		if (direction == 'Y') {
			roomA(direction);
		} else if (direction == 'N'){
			System.exit(0);
		}

		
		
	}
	
	
}








