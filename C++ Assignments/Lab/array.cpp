#include <iostream>
int main() 
{
 int i;
 char a[10];
 int nums[5];
 
 cout << "a[0] is at address " << (long) &a[0] << endl;
 cout << "a[1] is at address " << (long) &a[1] << endl;
 cout << "nums[0] is at address " << (long) &nums[0] << endl;
 cout << "nums[1] is at address " << (long) &nums[1] << endl;
 
 // Initialize char array to all dots
 for (i = 0; i < 10; i++)
    a[i]='.';
    
    
 // YOUR CODE WILL GO HERE
 // Output contents of char array
 for (i = 0; i < 10; i++)
    cout << a[i]; 
 cout << endl;
}
