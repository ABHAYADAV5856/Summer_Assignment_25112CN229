#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        int sum = n * (n + 1) / 2;
        cout << "The sum of the first "<< n << " natural numbers is: "<< sum << endl;
    } else {
         cout << "Invalid Input" << endl;
    }
    return 0;
}