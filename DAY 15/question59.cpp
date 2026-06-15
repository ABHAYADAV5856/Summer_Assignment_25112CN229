#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the  size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x = arr[n - 1];

    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = x;

    cout << "Array after right rotation of the array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}