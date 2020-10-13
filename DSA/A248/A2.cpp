.data

#Inst: .#

CountR: .word 0
CountJ: .word 0
CountI: .word 0
TypeR: .word 0 
TypeJ1: .word 2
TypeJ2: .word 3
EndI: .word 0


.text
main:
	lw $t0, CountR
	lw $t1, CountJ
	lw $t2, CountI
	lw $t4, TypeR
	lw $t5, TypeJ1
	lw $t6, TypeJ2
	li $t3, 0x00400000 # Per Instructions: should load the address of its first instruction (0x400000) into a register, and initialize three separate instruction class counters to zero.
	li $t8, 0
	li $t9, 0
	li $s0, 0 
	lw $t7, EndI

Loop: #read instruction at address into $s0
	lw $s0,0($t3)
	#shift it right logical by 26 ,makes it 0000xxxx, $s0= bits 31-26 only
	srl $s0,$s0,26
	# check shifted instruction
	beq $s0, $t4, typeR #if it's typeR, then jump to typeR
	beq $s0, $t5, typeJ #if it's typeJ1, then jump to typeJ
	beq $s0, $t6, typeJ #if it's typeJ2, then jump to typeJ

TypeI: #none of above, then it's typeI
	addi $t2, $t2, 1 #countI +1
	j Next #jump to next

typeR: # bit (31-26) is 0x00 (type r)
	addi $t0, $t0, 1 #countR +1
	j Next #jump to next

typeJ: # bit (31-26) is 0x02 or 0x03
	addi $t1, $t1, 1 #countJ +1
	j Next #jump to next

Next: #after count, check if it's end instruction
	beq $s0,$t7,Exit #if it's endI, jump to exit
	#not end yet, add address to get another instruction
	addi $t3,$t3,4 #address+4
	j Loop

Exit: #print result
#----------
	li $v0,4
	la $a0, CountR
	syscall
	li $v0,4
	la $a0, CountJ
	syscall
	li $v0,4
	la $a0, CountI
	syscall
	li $v0,10
	syscall
