import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      
      double userAge, userWeight, userHeart, userTime, userAgeTimes,
      menAge, menWeight, menHeart, menTime, finalMenCalories, finalWomenCalories,
      womenAge, womenHeart, womenTime;
      
      
      Scanner scan = new Scanner(System.in);
      userAge = scan.nextDouble();
      userWeight = scan.nextDouble();
      userHeart = scan.nextDouble();
      userTime = scan.nextDouble();
      
      menAge = (userAge * 0.2017) - (userWeight * 0.09036);
      menHeart = (userHeart * 0.6309) - 55.0969;
      menTime = userTime / 4.184;
      
      womenAge = (userAge * 0.074) - (userWeight *  0.05741);
      womenHeart = (userHeart * 0.4472) - 20.4022;
      womenTime = userTime / 4.184;
      
      finalMenCalories = (menAge + menHeart) * userTime / 4.184;
      finalWomenCalories = (womenAge + womenHeart) * userTime / 4.184;   
      
      System.out.printf("Men: %.2f calories\n", finalMenCalories);
      System.out.printf("Women: %.2f calories\n", finalWomenCalories);
      
   }
} 
