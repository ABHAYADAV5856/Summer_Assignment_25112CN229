#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int Sum = n * (n + 1) / 2;
    int Sum2 = 0;

    for (int i = 0; i < n - 1; i++) {
        Sum2 += arr[i];
    }

    int missing = Sum - Sum2;

    cout << "Missing number = " << missing;

    return 0;
}