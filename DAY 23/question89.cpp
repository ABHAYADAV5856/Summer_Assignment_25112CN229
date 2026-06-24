#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    
    cout << "Enter a string: ";
    getline(cin, s);

    int n[256] = {0};

    for (char c : s) 
    {
        n[(unsigned char)c]++;
    }


    for (char c : s) 
    {
        if (n[(unsigned char)c] == 1)
        {
            cout << "First non-repeating character: " << c << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found." << endl;

    return 0;
}
