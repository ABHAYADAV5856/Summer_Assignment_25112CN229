#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int term;
    cout << "Enter element to search: ";
    cin >> term;

    int k = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == term) {
            k = i;
            break;
        }
    }

    if (k != -1)
        cout << "Element found at index " << k;
    else
        cout << "Element not found";

    return 0;
}