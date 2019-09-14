// Display name and weight of heaviest person

import java.util.Scanner;

class HeaviestPerson {
   public static void main(String [] args) {  
      Scanner scnr = new Scanner(System.in);
      String name1;
      String name2;
      String name3;
      String name4;
      String name5;
      double weight1;
      double weight2;
      double weight3;
      double weight4;
      double weight5;
      String nameMax;
      double weightMax;
           
      System.out.println("Enter 5 names, each followed by a weight in pounds");
      name1 = scnr.next();
      weight1 = scnr.nextDouble();
      name2 = scnr.next();
      weight2 = scnr.nextDouble();
      name3 = scnr.next();
      weight3 = scnr.nextDouble();
      name4 = scnr.next();
      weight4 = scnr.nextDouble();
      name5 = scnr.next();
      weight5 = scnr.nextDouble();
      
      weightMax = Math.max(weight1, Math.max(weight2, Math.max(weight3, Math.max(weight4, weight5))));
      
      
      if (weight1 == weightMax) {
         System.out.println("The heaviest person is " + name1 + 
                         ". Her or his weight is " + weightMax + " lbs.");
      } else if (weight2 == weightMax){
         System.out.println("The heaviest person is " + name2 + 
                         ". Her or his weight is " + weightMax + " lbs.");
      } else if (weight3 == weightMax) {
         System.out.println("The heaviest person is " + name3 + 
                         ". Her or his weight is " + weightMax + " lbs.");
      } else if (weight4 == weightMax) {
         System.out.println("The heaviest person is " + name4 + 
                         ". Her or his weight is " + weightMax + " lbs.");
      } else if (weight5 == weightMax) {
         System.out.println("The heaviest person is " + name5 + 
                         ". Her or his weight is " + weightMax + " lbs.");
      } else {
         System.out.println("No max number");
      }
      
   }
}
