// Summary: Given integer values for red, green, and blue, subtract the gray from each value.

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      int num1, num2, num3, minimumNumber;
      
      Scanner keyboard = new Scanner(System.in);
      num1 = keyboard.nextInt();
      num2 = keyboard.nextInt();
      num3 = keyboard.nextInt();
      
      minimumNumber = Math.min(num1, Math.min(num2, num3));
      
      System.out.println((num1 - minimumNumber)+ " " + (num2 -  minimumNumber) + " " + (num3 - minimumNumber));
   }
}
