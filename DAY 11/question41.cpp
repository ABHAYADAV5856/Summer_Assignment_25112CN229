#include <iostream>
using namespace std;

int Sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = Sum(a, b);

    cout << "Sum = " << sum;

    return 0;
}