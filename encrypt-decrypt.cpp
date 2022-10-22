/* STUDENT NAME...: NİSANUR BAŞTOR
   STUDENT NUMBER.: B201202044 */ 

#include<iostream>

using namespace std;

string generateKey(string str, string key)
{
    int x = str.size();

    for (int i = 0; ; i++)
    {
        if (x == i)
            i = 0;
        if (key.size() == str.size())
            break;
        key.push_back(key[i]);
    }
    return key;
}


string ENCRYPTED(string str, string key)
{
    string encrypt;

    for (int i = 0; i < str.size(); i++)
    {
        // converting in range 0-25
        char x = (str[i] + key[i]) % 26;

        // convert into alphabets
        x += 'A';

        encrypt.push_back(x);
    }
    return encrypt;
} 

string DECRYPTED (string cipher_text, string key)
{
    string orig_text;

    for (int i = 0; i < cipher_text.size(); i++)
    {
        // converting in range 0-25
        char x = (cipher_text[i] - key[i] + 26) % 26;

        // convert into alphabets
        x += 'A';
        orig_text.push_back(x);
    }
    return orig_text;
}

int main()
{
    string password;
    string str;

    cout << "ENTER A PASSWORD...: ";
    cin >> password;

    cout << "ENTER A MESSAGE....: ";
    cin >> str;
    cout << "-------------------------------------------" << endl;
    cout << "PASSWORD...........: " << password << endl;
    cout << "MESSAGE............: " << str << endl;
    cout << "-------------------------------------------" << endl;

    string key = generateKey(str, password);
    string encrypt = ENCRYPTED(str, key);

    cout << "DECRYPTED MESSAGE..: " << DECRYPTED(encrypt, key) << endl;
    cout << "ENCRYPTED MESSAGE..: " << encrypt << "\n";
    return 0;
}