#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int large = arr[0];
    int small = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }

        if (arr[i] < small) {
            small = arr[i];
        }
    }

    cout << "Largest element = " << large << endl;
    cout << "Smallest element = " << small << endl;

    return 0;

}