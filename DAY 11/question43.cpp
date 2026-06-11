#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (Prime(num))
        cout << "The number is a Prime Number";
    else
        cout << "The number is not a Prime Number";
    return 0;
}