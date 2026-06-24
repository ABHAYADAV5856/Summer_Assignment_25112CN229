#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    bool visited[256] = {false};

    for (char ch : str) 
    {
        if (!visited[(unsigned char)ch])
        {
            result = result + ch;
            visited[(unsigned char)ch] = true;
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}