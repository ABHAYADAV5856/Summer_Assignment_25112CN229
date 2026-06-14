#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element = " << second_largest;

    return 0;
}