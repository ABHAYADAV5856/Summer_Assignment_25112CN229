#include <iostream>
using namespace std;

long fac(int n)
{
    long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Factorial = " << fac(a);

    return 0;
}