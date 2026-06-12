#include <iostream>
using namespace std;

bool Perfect_Number(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum == n;
}

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (Perfect_Number(a))
        cout << a << " is a Perfect Number";
    else
        cout << a << " is not a Perfect Number";

    return 0;
}
