#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long a = 0, b = 1;

    if (n == 0)
    {
        cout << a << endl;
    }
    else if (n == 1)
    {
        cout << b << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }

    return 0;
}