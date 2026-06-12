#include <iostream>
using namespace std;

bool Palindrome(int n)
{
    int og = n; //og = original because n will be modified
    int rv = 0; //rv = reversed 

    while (n > 0)
    {
        int digit = n % 10;
        rv = rv * 10 + digit;
        n /= 10;
    }

    return og == rv;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (Palindrome(a))
        cout << a << " is a Palindrome Number";
    else
        cout << a << " is Not a Palindrome Number";

    return 0;
}