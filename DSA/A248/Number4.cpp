.data
  ARRAY: .word 10,5,7,8,88,3,16,11,-1
  COUNT : .word 0
  prompt: .asciiz "\nCount of positive numbers evenly divisible by 8 is : "

.globl main
.text
main:
  la $t7,ARRAY   #store address of A
  li $t6,0 #stores positive count
Loop:
  lw $t0,0($t7) #load value
  blt $t0,$zero,exitLoop
  div $t0,$t0,8 #divide number by 8
  mfhi $t0 #load reminder
  beq $t0,$zero,increaseByOne
  j skip
  increaseByOne:
  add $t6,$t6,1 #count ++
skip:
  add $t7,$t7,4 #get next number
  j Loop

exitLoop:
  li $v0,4
  la $a0,prompt
  syscall
  li $v0,1
  move $a0,$t6
  syscall
  sw $t6,COUNT
  li $v0,10 #Terminate execution
  syscall
