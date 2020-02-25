#include <iostream>
#include <cstring>
using namespace std;



void decrypt(int key) {

	char message[] = "HI THERE";

	int one = (message[3] << 24) | (message[2] << 16) | (message[1] << 8) | (message[0]);

	int two = (message[7] << 24) | (message[6] << 16) | (message[5] << 8) | (message[4]);

	int ff = one + key;

	
	message[3] = (char)(ff >> 24); 
	message[2] = (char)(ff >> 16); 
	message[1] = (char)(ff >> 8); 
	message[0] = (char)ff;

	cout << message[0] << message[1] << message[2] << message[3] <<endl;

}

int main() {

	//char message[] = ", vtaNm a_\"dabp!!";

	decrypt(2);






}
