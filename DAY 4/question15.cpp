#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, originalNum, remainder, digits = 0;
    double result = 0;

    cout << "Enter a number: ";
    cin >> n;

    originalNum = n;

    while (originalNum != 0)
    {
        originalNum /= 10;
        digits++;
    }

    originalNum = n;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}
