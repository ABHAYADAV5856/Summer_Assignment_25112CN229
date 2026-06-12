#include <bits/stdc++.h>
using namespace std;

bool Armstrong(int n)
{
    int og = n; //og = original because n will be modified
    int a = 0;
    int sum = 0;

    int temp = n;

    while (temp > 0)
    {
        a++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        int x = temp % 10;
        sum += pow(x, a);
        temp /= 10;
    }

    return sum == og;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (Armstrong(number))
        cout << number << " is an Armstrong Number";
    else
        cout << number << " is not an Armstrong Number";

    return 0;
}
