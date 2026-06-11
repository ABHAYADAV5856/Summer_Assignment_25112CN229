#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int x = 0; x < n; x++) 
    {

        for (int blank = 0; blank < n - x - 1; blank++)
        {
            cout << " ";
        }

        for (char ch = 'A'; ch <= 'A' + x; ch++)
        {
            cout << ch;
        }

        for (char ch = 'A' + x - 1; ch >= 'A'; ch--) 
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}