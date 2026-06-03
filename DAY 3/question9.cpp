#include <iostream>
using namespace std;
int main() {
    int n,i=2;
    cout << "enter a number:";
    cin >> n;
    if(n>0)
    {
        while(i<n)
        {
            if(n%i==0)
            {
                break;
            }
            i++;
        }
    }   
    if(i==n)
    {
        cout << "it is a prime number";
    }
    else
    {
        cout << "it is not a prime number";
    }
}