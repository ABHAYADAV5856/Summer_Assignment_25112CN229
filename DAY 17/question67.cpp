#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter size of first array: ";
    cin >> a;
    int arr1[a];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> b;
    int arr2[b];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of arrays: ";

    for(int i = 0; i < a; i++) {
        bool found = false;

        for(int j = 0; j < b; j++) {
            if(arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        bool printed = false;
        for(int k = 0; k < i; k++) {
            if(arr1[k] == arr1[i]) {
                printed = true;
                break;
            }
        }

        if(found && !printed) {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}