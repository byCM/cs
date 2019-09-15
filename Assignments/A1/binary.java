import java.util.Scanner;

public class ConvertBinary {
   public static void main(String[] args){
      Scanner scan = new Scanner(System.in);
      String binaryNum;
      char charOne, charTwo, charThree, charFour;
      int charOneDecimal, charTwoDecimal, charThreeDecimal, charFourDecimal, finalDecimal;
      
      binaryNum = scan.next();
      
      charOne = binaryNum.charAt(0);
      charTwo = binaryNum.charAt(1);
      charThree = binaryNum.charAt(2);
      charFour = binaryNum.charAt(3);
      
      charOneDecimal = charOne - '0';
      charTwoDecimal = charTwo - '0';
      charThreeDecimal = charThree - '0';
      charFourDecimal = charFour - '0';
      
      finalDecimal = charOneDecimal * 8 + charTwoDecimal * 4 + charThreeDecimal * 2 + charFourDecimal * 1;
      
      System.out.println(finalDecimal);  
      
   }
}
