#include<iostream>
using namespace std;
int main()
{
    int n, a, digit, reverse=0;
    cout << "Enter an integer: ";
    cin >> n;
    a = n;
    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == a)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}