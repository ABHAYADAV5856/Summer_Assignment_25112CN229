#include<iostream>
using namespace std;
int main()
{
    int n, product = 1;
    cout << "Enter an integer: ";
    cin >> n;
    while(n>0)
    {
        product=product*(n%10);
        n=n/10;
    }
    cout << "The product is: " << product << endl;
    return 0;
}
