// ceaser
// polyalpha
// shift
// railfenceboth technique
// command on linux
// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;

string encrypt(string msg, int s)
{
	string res = "";
	for (int i = 0; i < msg.length(); i++) {
		if (isupper(msg[i]))
    {
      res += char(int(msg[i] + s - 65) % 26 + 65);
    }
		else
    {
      res += char(int(msg[i] + s - 97) % 26 + 97);
    }
	}
	return res;
}

int main()
{
	string msg;
  cout<<"Enter your plaintext: ";
  cin>>msg;
	int k = 3;
	cout << "Plain Text : " << msg;
  string en = encrypt(msg, k);
	cout << "\nEncryption: " << en;
  cout << "\nDecryption: " << decrypt(en, k);
	return 0;
}
