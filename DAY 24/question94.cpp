#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, c = "";

    cout << "Enter a string: ";
    cin >> s;

    int count = 1;

    for (int i = 0; i < s.length(); i++) 
    {
        if (i < s.length() - 1 && s[i] == s[i + 1]) 
        {
            count++;
        }
        else 
        {
            c += s[i];
            c += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << c << endl;

    return 0;
}