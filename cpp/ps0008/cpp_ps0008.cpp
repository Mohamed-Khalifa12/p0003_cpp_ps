#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isInt(string skey);
void decrypt(string msg, int key);
bool isAlphapet(char c);

enum Case {UPPER = 0, LOWER};

int main(void)
{
    // prompting user for valid ciphertext and key 3/3
    string skey, msg;
    int key;

    do
    {
        cout << "key: ";
        getline(cin, skey); // you accept string (2 successive getline() solve buffer problems)
    } while (!isInt(skey));
    
    key = stoi(skey);

    // Taking message 1/1
    cout << "ciphertext: ";
    getline(cin, msg);

    // invoke your decrypt function to return the plaintext 1/1
    decrypt(msg, key);

    return 0;
}

// Decrypting process 3/3
void decrypt(string msg, int key)
{
    /* implement your function and consider that:
        - all uppercase letters in ciphertext are uppercase letters in plaintext
        - all lowercase letters in ciphertext are lowercase letters in plaintext
        - all digits, special characters, spaces in ciphertext are the same in plaintext
    */

   for(int i = 0; i < msg.length(); i++)
   {
        if(isAlphapet(msg[i]))
        {
            Case letter = UPPER;
            if(msg[i] >= 'a' && msg[i] <= 'z')
                letter = LOWER;
            msg[i] -= (key % 26);

            if(letter == UPPER)
            {
                if(msg[i] < 'A')
                    msg[i] += 26;
                else if(msg[i] > 'Z')
                    msg[i] -= 26;
            }
            else if(letter == LOWER)
            {
                if(msg[i] < 'a')
                    msg[i] += 26;
                else if(msg[i] > 'z')
                    msg[i] -= 26;              
            }
        }
   } // DRY!

   cout << "plaintext: " << msg <<endl; 
}

bool isInt(string skey){
    for (int i = 0, n = skey.length(); i < n; i++){
        if (skey[i] < '0' || skey[i] > '9')
        {
            if((skey[i] == '-' || skey[i] == '+') && i == 0 && n != 1)
                continue;
            return false;
        }
    }

    return true;
}

bool isAlphapet(char c)
{
    return (c >= 'a' &&  c <= 'z') || (c >= 'A' &&  c <= 'Z');
} // no need to reinvent the wheel

// great work 😎 10/10 ⭐
