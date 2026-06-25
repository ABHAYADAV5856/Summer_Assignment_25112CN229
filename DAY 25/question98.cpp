#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    set<char> s1, common;

    for (char ch : str1) 
    {
        s1.insert(ch);
    }

    for (char ch : str2) 
    {
        if (s1.find(ch) != s1.end())
        {
            common.insert(ch);
        }
    }

    cout << "Common characters: ";
    for (char ch : common) {
        cout << ch << " ";
    }

    return 0;
}
