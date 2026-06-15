#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[x] = arr[i];
            x++;
        }
    }

    while(x < n) {
        arr[x] = 0;
        x++;
    }

    cout << "Array after moving zeroes to end: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}