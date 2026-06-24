#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};

    for (char ch : s) 
    {
        freq[(unsigned char)ch]++;
    }

    for (char ch : s) 
    {
        if (freq[(unsigned char)ch] > 1) 
        {
            cout << "First repeating character: " << ch << endl;
            return 0;
        }
    }

    cout << "No repeating character found." << endl;

    return 0;
}
