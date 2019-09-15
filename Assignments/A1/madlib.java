import java.util.Scanner; 

public class MadLib {
   public static void main(String[] args) {
   String userName, userLocation, userNumber, userNoun;
   
   Scanner scan = new Scanner(System.in);
   userName = scan.next();
   userLocation = scan.next();
   userNumber = scan.next();
   userNoun = scan.next();
   
   System.out.println(userName + " went to " + userLocation + " to buy " + userNumber + " different types of " + userNoun + ".");
   
   
   }
}
