########################################################################################
# Name: Michael Ross mjross4#@alaska.edu
# Date: 11/1/2020
#
#
#
#
# Algorithm: Sorts a array full of integers using selection sort
#

#
#
#
######################################################################################3
.text
.globl main
    
main:                                         
    la  $t0, Array      # copy base address   
    add $t0, $t0, 40               	      
 
outterLoop:             # determine when array is sorted							
    add $t1, $0, $0      											
    la  $a0, Array      											
innerLoop:                  	
    lw  $t2, 0($a0)         # sets $t0 to the current element in array						
    lw  $t3, 4($a0)         # sets $t1 to the next element in array						
    slt $t5, $t2, $t3       											
    beq $t5, $0, continue   											
    add $t1, $0, 1          				
    sw  $t2, 4($a0)         # indexOfMin = i;								
    sw  $t3, 0($a0)         # swap	
continue:													
    addi $a0, $a0, 4            									        
    bne  $a0, $t0, innerLoop    
    bne  $t1, $0, outterLoop    
 
 
 
##################################
#void swap(int &a, int &b)
#{
#   int temp = a;
#   a = b;
#   b = temp;
#}
#
#void selectionSort(int a[], int n)
#{
#   for (int i = 0; i < n-1; i++)
#      {
#         int indexOfMin = i;
#        for (int j = i+1; j < n; j++)
#         {
#            if (a[j] < a[indexOfMin])
#            indexOfMin = j;
#         }
#         swap(a[i], a[indexOfMin]);
#     }
# }
#
#int main()
#{
#   int a[] = {4, 5, 1, 354, 21, 45, 3};
#   for (int i = 0; i < 7; i++)
#      cout << a[i] << endl;
#   selectionSort(a, 7);
#   for (int i = 0; i < 7; i++)
#      cout << a[i] << endl;
#}
############################################
