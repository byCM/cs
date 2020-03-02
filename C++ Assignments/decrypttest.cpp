#include <iostream>
#include <cstring>
using namespace std;


void decrypt(int key) {

	char message[17] = ",vtaNm a_\"dabp!!";

	// This includes both ways to solve this, one being very lengthy and the other being very simple using pointers. 


	/*
	int one = (int(message[3]) << 24) | (int(message[2]) << 16) | (int(message[1]) << 8) | (int(message[0]));
	int two = (int(message[7]) << 24) | (int(message[6]) << 16) | (int(message[5]) << 8) | (int(message[4]));
	int three = (int(message[11]) << 24) | (int(message[10]) << 16) | (int(message[9]) << 8) | (int(message[8]));
	int four = (int(message[15]) << 24) | (int(message[14]) << 16) | (int(message[13]) << 8) | (int(message[12]));
	message[3] = (char)(one - key >> 24);
	message[2] = (char)(one - key >> 16);
	message[1] = (char)(one - key >> 8);
	message[0] = (char)one - key;
	message[7] = (char)(two - key >> 24);
	message[6] = (char)(two - key >> 16);
	message[5] = (char)(two - key >> 8);
	message[4] = (char)two - key;
	message[11] = (char)(three - key >> 24);
	message[10] = (char)(three - key >> 16);
	message[9] = (char)(three - key >> 8);
	message[8] = (char)three - key;
	message[15] = (char)(four - key >> 24);
	message[14] = (char)(four - key >> 16);
	message[13] = (char)(four - key >> 8);
	message[12] = (char)four - key;

	for (int i = 0; i < 16; i++) {
		cout << message[i];
	}
	*/

	int i = 0;

	do {
		int* value = (int*)(message + i);
		*value = *value - key;
		i += 4;
	} while (message[i] != '\0');

	cout << message << endl;

}


int main() {

	/*
	for(int i = 0; i < 501; i ++) {
		decrypt(i);
	}
	*/

	decrypt(491);

}
