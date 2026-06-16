#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int frequency = 0, element;

    for (int i = 0; i < n; i++) {
        int freq = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        if (freq > frequency) {
            frequency = freq;
            element = arr[i];
        }
    }

    cout << "Element with maximum frequency = " << element << endl;
    cout << "Frequency = " << frequency << endl;

    return 0;
}