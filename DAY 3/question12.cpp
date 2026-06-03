#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // Store original values because a and b will be used later
    x = a;
    y = b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    // Store the GCD
    int gcd = x;
    int lcm = (a * b) / gcd;
    // Display the result
    cout << "LCM = " << lcm << endl;
    return 0;
}