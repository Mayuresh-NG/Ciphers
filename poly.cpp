#include <bits/stdc++.h>
using namespace std;

int main() {
    string msg, key, k, ct, pt;
    int len_msg, len_key, i, j=0;

    cout << "Enter Message : ";
    getline(cin, msg);
    transform(msg.begin(), msg.end(), msg.begin(), ::toupper);

    cout << "Enter Key : ";
    getline(cin, key);
    transform(key.begin(), key.end(), key.begin(), ::toupper);

    len_msg = msg.length();
    len_key = key.length();

    //loop for iterating the key to length of the message
    for (i=0; i<len_msg; i++,j++) {
        if (j == len_key) {
            j = 0;
        }
        k += key[j];
    }


    //loop for generating the cipher text by calculating ct of 1 character and appending it to ct
    for (i=0; i<len_msg; i++) {
        ct += ((msg[i]+k[i])%26)+'A';
        cout<<ct<<endl;
    }

    //loop to generate plaintext
    for (i=0; i<len_msg; i++) {
        pt += (((ct[i]-k[i])+26)%26)+'A';
    }

    transform(ct.begin(), ct.end(), ct.begin(), ::tolower);
    transform(pt.begin(), pt.end(), pt.begin(), ::tolower);
    cout << "\nEncrypted Message : " << ct;
    cout << "\nDecrypted Message : " << pt;
    return 0;
}
