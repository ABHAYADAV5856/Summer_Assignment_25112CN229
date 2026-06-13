#include <iostream>
using namespace std;

int main() {
    int n ,i=0 ;

    cout << "Enter  size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for ( i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements of array are: ";
    for ( i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}