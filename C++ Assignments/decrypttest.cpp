#include <iostream>
#include <cstring>
using namespace std;


void decrypt(int key) {

	char message[] = ",vtaNm a_\"dabp!!";
	//char message[] = "HI THERE";

	int one = (message[3] << 24) | (message[2] << 16) | (message[1] << 8) | (message[0]);
	int two = (message[7] << 24) | (message[6] << 16) | (message[5] << 8) | (message[4]);
	int three = (message[11] << 24) | (message[10] << 16) | (message[9] << 8) | (message[8]);
	int four = (message[15] << 24) | (message[14] << 16) | (message[13] << 8) | (message[12]);

	int first = one + key;
	int second = two + key;
	int third = three + key;
	int fourth = four + key;


	
	message[3] = (char)(first >> 24); 
	message[2] = (char)(first >> 16); 
	message[1] = (char)(first >> 8); 
	message[0] = (char)first;

	message[7] = (char)(second >> 24);
	message[6] = (char)(second >> 16);
	message[5] = (char)(second >> 8);
	message[4] = (char)second;
	
	message[11] = (char)(third >> 24);
	message[10] = (char)(third >> 16);
	message[9] = (char)(third >> 8);
	message[8] = (char)third;

	message[15] = (char)(fourth >> 24);
	message[14] = (char)(fourth >> 16);
	message[13] = (char)(fourth >> 8);
	message[12] = (char)fourth;
	

	cout << message[0] << message[1] << message[2] << message[3] << message[4] << message[5] << message[6] << message[7] <<
		message[8] << message[9] << message[10] << message[11] << message[12] << message[13] << message[14] << message[15] << endl;



	/*
	for (int i = 0; i < 15; i++) {
		cout << message[i];
	}
	*/


}

int main() {

	//char message[] = ", vtaNm a_\"dabp
	
	
	for (int i = 0; i < 501; i++) {
		decrypt(i);
	}




}
