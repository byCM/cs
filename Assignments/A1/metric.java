import java.util.Scanner; 

public class Volumes {
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      
      double liters, fluidOunces, remainderOfCups;
      
      int cups, pints, quarts, gallons, remainderOfPints, remainderOfQuarts, remainderOfGallons;
      
      liters = scan.nextDouble();
      
      fluidOunces = liters / 0.0295735295625;
      cups = (int) fluidOunces / 8;
      remainderOfCups = fluidOunces % 8;
      
      pints = cups / 2;
      remainderOfPints = cups % 2;
      
      quarts = pints / 2;
      remainderOfQuarts = pints % 2;
      
      gallons = quarts / 4;
      remainderOfGallons = quarts % 4;
      
      
      System.out.println("Please enter a volume in liters: This volume of " + liters + " liter(s) is equivalent to " + gallons + " gallon(s), " +
      remainderOfGallons + " quart(s), " + remainderOfQuarts + " pint(s), " + remainderOfPints + " cup(s) and " + remainderOfCups + " fluid ounce(s).");
      
   }
}
