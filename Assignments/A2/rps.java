import java.util.Scanner;
import java.util.Random;

public class RPS {
  
  public static void main(String[] args) { 
     Random rand = new Random();
     Scanner scan = new Scanner(System.in);
     int seed = scan.nextInt();
     rand.setSeed(seed);
     int computerChoice = rand.nextInt(3);
    
     
     int userChoiceNum;
     String userChoice;
     
    // seed = scan.nextInt();
    // rand.setSeed(seed);
     
     userChoice = scan.next();
     
     
     
     System.out.println("Enter a seed number and R, P, or S:");
     System.out.println("You entered: " + userChoice);
     
     /*if (computerChoice == 0) {
        System.out.println("The computer played: R");
     } else if (computerChoice == 1) {
        System.out.println("The computer played: P");
     } else if (computerChoice == 2) {
        System.out.println("The computer played: S");
     }*/
     
     
     if ((userChoice.equals("r")) || (userChoice.equals("R"))) {
        userChoiceNum = 0;
     } else if ((userChoice.equals("p")) || (userChoice.equals("P"))) {
        userChoiceNum = 1;
     } else if ((userChoice.equals("s")) || (userChoice.equals("S"))) {
        userChoiceNum = 2; 
     } else {
        userChoiceNum = -1;
        System.out.println("Invalid play, game exiting.");
     }
     break;
     
     if (computerChoice == 0) {
        System.out.println("The computer played: R");
     } else if (computerChoice == 1) {
        System.out.println("The computer played: P");
     } else if (computerChoice == 2) {
        System.out.println("The computer played: S");
     }
     
     
      // 0 = rock   1 = paper   2 = scissors
      
     if ((userChoiceNum == computerChoice)) {
        System.out.println("No winner");
     } else if ((userChoiceNum == 0 ) && (computerChoice == 1)) {
        System.out.println("Computer wins! Paper covers rock");
     } else if ((userChoiceNum == 0 ) && (computerChoice == 2)) {
        System.out.println("You win! Rock breaks scissors"); 
     } else if ((userChoiceNum == 1 ) && (computerChoice == 0)) {
        System.out.println("You win! Paper covers rock"); 
     } else if ((userChoiceNum == 1 ) && (computerChoice == 2)) {
        System.out.println("Computer wins! Scissors cuts paper");
     } else if ((userChoiceNum == 2 ) && (computerChoice == 0)) {
        System.out.println("Computer wins! Rock breaks scissors");
     } else if ((userChoiceNum == 2 ) && (computerChoice == 1)) {
        System.out.println("You win! Scissors cuts paper");
     } 
     
     
   

  }
}
