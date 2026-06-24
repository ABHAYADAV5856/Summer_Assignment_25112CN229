#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (s1.length() != s2.length())
    {
        cout << "Strings are not anagrams." << endl;
        return 0;
    }

    int frequency[256] = {0};

    for (char ch : s1)
    {
        frequency[(unsigned char)ch]++;
    }

    for (char ch : s2)
    {
        frequency[(unsigned char)ch]--;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (frequency[i] != 0)
        {
            cout << "Strings are not anagrams." << endl;
            return 0;
        }
    }

    cout << "Strings are anagrams." << endl;

    return 0;
}