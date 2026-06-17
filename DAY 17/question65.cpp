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

    cout << "Enter the size of second array: ";
    cin >> b;

    int arr2[b];
    cout << "Enter the elements of second array: ";
    for(int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    int merged[a + b];

    for(int i = 0; i < a; i++) {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < b; i++) {
        merged[a + i] = arr2[i];
    }

    cout << "Merged Array of the two arrays: ";
    for(int i = 0; i < a + b; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}