##########################################################################################################################
# Name: Michael Ross
# Date: 9/17/2020 
#
#
#
# Algorithm: Write a program (in Java, C++, or a similarly self-documenting high-level programming language) that interactively prompts for and reads a decimal integer value; 
#	     uses a loop and the div and modulo operators to count the number of bits in the binary representation of the specified value that are set (equal to 1); and interactively displays that count.  
#	     For example, if the user enters 3910 (which equals 0000 0000 0000 0000 0000 0000 0010 01112 in binary), your program should determine that exactly 4 bits are set, and should display a message similar to the following: There are exactly 4 bits set in the value 39.
#	     Similarly, if the user enters -210 (which equals 1111 1111 1111 1111 1111 1111 1111 11102), your program should display "There are exactly 31 bits set in the value -2."
#
#
#
#
#
#
#########################################################################################################################

.data
prompt: .asciiz "\nEnter an integer: "
prompt1: .asciiz "There are exactly "
prompt2: .asciiz " bits set in the value "

.globl main
.text

main:
	li $v0,4					# long long num;
	la $a0,prompt #prompt				# cout << "Enter a decimal integer value: ";
	syscall						# cin >> num;
	li $v0,5					# countSet(num);
	syscall   					# return 0;
	move $t1,$v0 
	move $t5,$t1 	

	li $s0,0 					
loop:							# while (i < 32)
	div $t2,$t1,2 					# decimal /= 2; 
	mfhi $t2 					# rem = decimal % 2; arr[i] = rem;
	beqz $t2, skip 					# if (rem == 1)
	add $s0,$s0,1 					# i++;
skip:
	srl $t1,$t1,1 					# for (int i = 31; i >= 0; i--)
	bgtz $t1,loop 					# cout << arr[i];

	li $v0,4						
	la $a0,prompt1 #prompt				
	syscall					
	li $v0,1					
	move $a0,$s0					
	syscall						
	li $v0,4					
	la $a0,prompt2 #prompt				
	syscall						
	li $v0,1					
	move $a0,$t5					
	syscall						
							
							
							
#########################################################################################################################																					
# 	FULL C++ PROGRAM
#	#include <iostream>
#	#include <math.h>

#	using namespace std;

#	void countSet(unsigned long long decimal)
#	{
#	    unsigned long long binarynum = 0, temp = 1, num;
#	    int rem;
#	    int i = 0, set = 0;
#	    int arr[32];
#	
#	    while (i < 32)
#	    {
#	        rem = decimal % 2;
#	        decimal /= 2;
#	
#        	temp *= 10;
# 	       arr[i] = rem;
# 	       i++;
#	if (rem == 1)
#	            set++;
# 	   }
#	
# 	   cout << endl << "Binary Representation: ";
#	    {
# 	       for (int i = 31; i >= 0; i--)
#	            cout << arr[i];
# 	   }
# 	   cout << endl << endl << "There are exactly " << set << " bits set in the value " << num;
#	}
#
#
#	int main()
#	{
#	    long long num;
#	
#	    cout << "Enter a decimal integer value: ";
#	    cin >> num;
#	
#	    countSet(num);
#	
#	    return 0;
#	}
############################################################################################################################
