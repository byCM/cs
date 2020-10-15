


.data

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

Loop: 
	lw $s0,0($t3) #read instruction $t3 into $s0
	srl $s0,$s0,26
	
	beq $s0, $t4, typeR
	beq $s0, $t5, typeJ
	beq $s0, $t6, typeJ

TypeI: 
	addi $t2, $t2, 1 #countI++
	j Next #JUMP

typeR: # bit (31-26) is 0x00 (type r)
	addi $t0, $t0, 1 #countR++
	j Next #JUMP

typeJ: # bit (31-26) is 0x02 or 0x03
	addi $t1, $t1, 1 #countJ++
	j Next #JUMP

Next: 
	beq $s0,$t7,Exit # jump to exit if EndI
	addi $t3,$t3,4 #address+4
	j Loop

Exit:
	li $v0,4
	la $a0, CountR #PRINT
	syscall
	li $v0,4
	la $a0, CountJ #PRINT
	syscall
	li $v0,4
	la $a0, CountI #PRINT
	syscall
	li $v0,10
	syscall
