/program

#include<iostream>

#include<string>

using namespace std;

char *encryptMessage(char *str, int key);

char *decryptMessage(char *str, int key);

int main()

{

int key = 2;

char *encryptedMsg = encryptMessage("I am testing", key);

char *decryptedMsg = decryptMessage(encryptedMsg, key);

cout << "Encrypted message: " << encryptedMsg << endl;

cout << "Decrypted message: " << decryptedMsg << endl;

}

char *encryptMessage(char *str, int key)

{

char buf[5];

int i = 0,j=0,k=0,m ,len=0;

int number;

char *encryptedMsg;

//allocate memory for encryptedMsg

encryptedMsg = (char*)malloc((strlen(str) + 1)*sizeof(char));

while (str[i] != '\0')

{

//take four char into buf

if (j < 4)

{

buf[j++] = str[i++];

}

else

{

buf[j] = '\0';

j = 0;

//now convert 4 char array ie buf to int and add key to it

number = *(int *)buf+key;

//convert number back to char array

buf[3] = (char)(number & (0xFF));

buf[2] = (char)((number >> 8) & 0xFF);

buf[1] = (char)((number >> 16) & 0xFF);

buf[0] = (char)((number >> 24) & 0xFF);

m = i - 4;

k = 3;

while (k >= 0)

{

encryptedMsg[m] = buf[k];

//cout << "msg" << encryptedMsg[m] << " ";

m++;

k--;

len++;

}

}

}

if (strlen(str) != len)

{

//encrypt mesg which was incomlete

buf[j] = '\0';

j = 0;

//now convert 4 char array ie buf to int and add key to it

number = *(int *)buf + key;

//convert number back to char array

buf[3] = (char)(number & (0xFF));

buf[2] = (char)((number >> 8) & 0xFF);

buf[1] = (char)((number >> 16) & 0xFF);

buf[0] = (char)((number >> 24) & 0xFF);

m = i - 4;

k = 3;

while (k >= 0)

{

encryptedMsg[m] = buf[k];

m++;

k--;

}

}

encryptedMsg[strlen(str)] = '\0';

//cout << "Encrypted msg " << encryptedMsg << endl;

return encryptedMsg;

}

char *decryptMessage(char *str, int key)

{

char buf[5];

int i = 0, j = 0, k = 0, m, len = 0;

int number;

char *decryptedMsg;

//allocate memory for encryptedMsg

decryptedMsg = (char*)malloc((strlen(str) + 1)*sizeof(char));

while (str[i] != '\0')

{

//take four char into buf

if (j < 4)

{

buf[j++] = str[i++];

}

else

{

buf[j] = '\0';

j = 0;

//now convert 4 char array ie buf to int and add key to it

number = *(int *)buf - key;

//convert number back to char array

buf[3] = (char)(number & (0xFF));

buf[2] = (char)((number >> 8) & 0xFF);

buf[1] = (char)((number >> 16) & 0xFF);

buf[0] = (char)((number >> 24) & 0xFF);

m = i - 4;

k = 3;

while (k >= 0)

{

decryptedMsg[m] = buf[k];

//cout << "msg" << decryptedMsg[m] << " ";

m++;

k--;

len++;

}

}

}

if (strlen(str) != len)

{

//encrypt mesg which was incomlete

buf[j] = '\0';

j = 0;

//now convert 4 char array ie buf to int and add key to it

number = *(int *)buf - key;

//convert number back to char array

buf[3] = (char)(number & (0xFF));

buf[2] = (char)((number >> 8) & 0xFF);

buf[1] = (char)((number >> 16) & 0xFF);

buf[0] = (char)((number >> 24) & 0xFF);

m = i - 4;

k = 3;

while (k >= 0)

{

decryptedMsg[m] = buf[k];

m++;

k--;

}

}

decryptedMsg[strlen(str)] = '\0';

//cout << "Decrypted msg " << decryptedMsg << endl;

return decryptedMsg;

}

------------------------------------------------------------------------------

//output1

Encrypted message: JI TJERE
Decrypted message: HI THERE

//output2

Encrypted message: K am"tesving
Decrypted message: I am testing
