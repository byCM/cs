#include<stdio.h>

void addOne(int* ptrNum);

int main() {

	int num = 7;

	printf("Before: %d\n", num);

	addOne(&num);

	printf("After: %d\n", num);

	return 0;

}

void addOne(int* ptrNum) {

	*ptrNum = *ptrNum + 1;

}




#include<iostream>

#include<cstring>

using namespace std;

bool isPalindrome(char* p, int length);

int main(){

char *cstr = new char[15];

char c = ' ';

do{

cout<<"Enter a string less than 14 characters. "<<endl;

cin>>cstr;

int len = strlen(cstr);

cout<<"You typed: "<<cstr<<". It is "<<len<<" characters long."<<endl;

cout<<"That string "<<(isPalindrome(cstr, len)?"is ":"is not ")<<"a palindrome."<<endl;

cout<<"Enter 'y' to repeat."<<endl;

cin>>c;

}while(c=='y');

delete[] cstr;

}

bool isPalindrome(char* p, int length){

for(int i=0; i<length/2; i++){

if(p[i]!=p[length-i-1])

return false;

}

return true;

}
