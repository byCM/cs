// Output each floating-point value with two digits after the decimal point

import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in); 
      double caffeineMg; // "double" supports floating-point like 75.5, versus int for integers like 75. 
      double sixHours;
      double twelveHours;
      double eighteenHours;
      
      caffeineMg = scnr.nextDouble(); 
      sixHours = caffeineMg/2;
      twelveHours = sixHours / 2;
      eighteenHours = twelveHours / 2;
      
      System.out.printf("After 6 hours: %.2f mg\n", sixHours);
      System.out.printf("After 12 hours: %.2f mg\n", twelveHours);
      System.out.printf("After 18 hours: %.2f mg\n", eighteenHours);
   }
}
