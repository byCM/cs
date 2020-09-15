.data				# #include <iostream>
prompt: .asciiz			# #include <math.h>
prompt1: .asciiz
prompt2: .asciiz		# using namespace std;

.globl main			# void countSet(unsigned long long decimal)
.text				# {
main:				#     unsigned long long binarynum = 0, temp = 1, num;
li $v0,4			#     int rem;
la $a0,prompt 			#     num = decimal;
syscall				#     int i = 0, set = 0;
li $v0,5			#     int arr[32];
syscall
move $t1,$v0			#     while (i < 32)
move $t5,$t1			#     {
				#         rem = decimal % 2;
li $s0,0 			#         decimal /= 2;

loop:				#         temp *= 10;
div $t2,$t1,2 			#         arr[i] = rem;
mfhi $t2			#         i++;
beqz $t2, skip			#         if (rem == 1)
add $s0,$s0,1 			#             set++;
skip:				#     }
srl $t1,$t1,1
bgtz $t1,loop			#     cout << endl << "Binary Representation: ";
				#     {
li $v0,4			#         for (int i = 31; i >= 0; i--)
la $a0,prompt1			#             cout << arr[i];
syscall				#     }
li $v0,1			#     cout << endl << endl << "There are exactly " << set << " bits set in the value " << num;
move $a0,$s0			# }
syscall
li $v0,4
la $a0,prompt2			# int main()
syscall				# {
li $v0,1			#     long long num;
move $a0,$t5
syscall				#     cout << "Enter a decimal integer value: ";
				#     cin >> num;

				#     countSet(num);

				#     return 0;
				# }
