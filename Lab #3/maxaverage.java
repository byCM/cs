import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner keyboard = new Scanner(System.in);
      int sum = 0;
      int maximum = 0;
      int count = 0;
      int total = 0;
      
     
     int num = keyboard.nextInt();
     
     while (num >= 0) {
            count++;
            total += num;
            maximum = Math.max(maximum, num);
            num = keyboard.nextInt();
        }
        
        int average = total/count;
        System.out.println(average + " " + maximum);
     
      
         
   }
}
