#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the size of first array: ";
    cin >> a;
    int arr1[a];

    cout << "Enter the elements of first array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the  size of second array: ";
    cin >> b;
    int arr2[b];

    cout << "Enter the elements of second array: ";
    for(int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    int uni[a + b];
    int k = 0;

    for(int i = 0; i < a; i++) {
        uni[k++] = arr1[i];
    }

    for(int i = 0; i < b; i++) {
        bool found = false;

        for(int j = 0; j < k; j++) {
            if(arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            uni[k++] = arr2[i];
        }
    }

    cout << "Union of arrays: ";
    for(int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }

    return 0;
}