#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    bool found = false;

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "No duplicates is foundin the array.";
    }

    return 0;
}