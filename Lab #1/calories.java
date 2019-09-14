// Lab #2

import java.util.Scanner;

class grades {
	public static void main(String args []) {
		Scanner keyboard = new Scanner(System.in);
		
		double finalGrade;
		char grade;		
		int g1, g2, g3, g4, g5, g6, g7, g8;
		
		//Weights your scores and adds them together to give you your final percent/grade of the class.
		
		System.out.println("zyBooks Participation Activities: ");
		g1 = keyboard.nextInt();
		double finalPart = (double) g1 *.05;
		System.out.printf("%.2f points earned for zyBooks Participation Activities Grade\n", finalPart);
		
		System.out.println("zyBooks Challenge Activities:");
		g2 = keyboard.nextInt();
		double finalChallenge = (double) g2 * .05;
		System.out.printf("%.2f points earned for zyBooks Challenge Activities\n", finalChallenge);
		
		System.out.println("Lecture Attendance:");
		g3 = keyboard.nextInt();
		double finalAttendance = (double) g3 * .05;
		System.out.printf("%.2f points earned for Lecture attendace\n", finalAttendance);
		
		System.out.println("Laboratory attendance and exercises:");
		g4 = keyboard.nextInt();
		double finalLab = (double) g4 * .15;
		System.out.printf("%.2f points earned for Laboratory attendance and exercises\n", finalLab);
		
		System.out.println("Homework:");
		g5 = keyboard.nextInt();
		double finalHomework = (double) g5 * .20;
		System.out.printf("%.2f points earned for Homework\n", finalHomework);
		
		System.out.println("Mid‐term exam I:");
		g6 = keyboard.nextInt();
		double finalMid1 = (double) g6 * .15;
		System.out.printf("%.2f points earned for Mid‐term exam I\n", finalMid1);
		
		System.out.println("Mid‐term exam II:");
		g7 = keyboard.nextInt();
		double finalMid2 = (double) g7 * .15;
		System.out.printf("%.2f points earned for Mid‐term exam II\n", finalMid2);

		System.out.println("Final exam: ");
		g8 = keyboard.nextInt();
		double finalExam = (double) g8 *.20;
		System.out.printf("%.2f points earned for Final Exam\n", finalExam);
		
		finalGrade = finalPart + finalChallenge + finalAttendance + finalLab + finalHomework + finalMid1 + finalMid2 + finalExam;
		keyboard.close();
		
		if (finalGrade >= 90) {
			grade = 'A';
		} 
		else if (finalGrade >= 80 ){
			grade = 'B';	
		} 
		else if (finalGrade >= 70) {
			grade = 'C';
		} 
		else if (finalGrade >= 60) {
			grade = 'D';
		} 
		else { 
			grade = 'F';
		}
		
		System.out.printf("You got a %C!, Your Final Grade is: %.2f/100.00\n", grade, finalGrade);
		
		
		}
	}
  
