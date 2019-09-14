//minimum

import java.util.Scanner;

class Minimum {
   public static void main(String [] args) {
      Scanner scnr = new Scanner(System.in);
      int num1;
      int num2;
      int minimum;
      
      System.out.println("Please enter two integers: ");
      num1 = scnr.nextInt();
      num2 = scnr.nextInt();
      
      minimum =  Math.min(num1, num2);
      
      /* Add code to assign the minimum of num1 and num2 to 
         the variable minimum 
      */
   
      System.out.println("The minimum of " + num1 + 
                         " and " + num2 +
                         " is " + minimum);
   }
}

//maximum

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      int num1;
      int num2;
      int num3;
      int maximum;
      
      Scanner keyboard = new Scanner(System.in);
      num1 = keyboard.nextInt();
      num2 = keyboard.nextInt();
      num3 = keyboard.nextInt();
      
      maximum = Math.max(num1, Math.max(num2, num3));
      
      System.out.println(maximum);
   }
}
