.data
prompt: .asciiz "\nEnter an integer: "
prompt1: .asciiz "There are exactly "
prompt2: .asciiz " bits set in the value "

.globl main
.text

main:
	li $v0,4
	la $a0,prompt #it will print prompt
	syscall
	li $v0,5
	syscall #ask user input
	move $t1,$v0 #save a to t1
	move $t5,$t1 #save value for print

	li $s0,0 #stores number of one
loop:
	div $t2,$t1,2 #divide by two
	mfhi $t2 #load reminder
	beqz $t2, skip #if reminder is zero skip
	add $s0,$s0,1 #increase count by one
skip:
	srl $t1,$t1,1 #shift number right side
	bgtz $t1,loop #loop until number is greater than zero

	li $v0,4
	la $a0,prompt1 #it will print prompt
	syscall
	li $v0,1
	move $a0,$s0
	syscall
	li $v0,4
	la $a0,prompt2 #it will print prompt
	syscall
	li $v0,1
	move $a0,$t5
	syscall

