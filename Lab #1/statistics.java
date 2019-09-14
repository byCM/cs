// Given 3 integers, output their average and their product, using integer arithmetic.
// Also output the average and product, using floating-point arithmetic.

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      int num1;
      int num2;
      int num3;
      
      int numProduct, numAverage;
      double numAverageDouble, numProductDouble;
      
      num1 = scan.nextInt();
      num2 = scan.nextInt();
      num3 = scan.nextInt();
      
      numAverage = (num1 + num2 + num3) / 3;
      numProduct = num1 * num2 * num3;
      
      numAverageDouble = ((double)num1 + (double)num2 + (double)num3) / 3;
      numProductDouble = (double)num1 * (double)num2 * (double)num3;
      
      System.out.println(numAverage + " " + numProduct);
      System.out.printf("%.2f ", numAverageDouble);
      System.out.printf("%.2f\n", numProductDouble);
   }
}
