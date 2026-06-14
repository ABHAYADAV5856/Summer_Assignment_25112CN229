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
    cout << "Enter element whose frequency need to find: ";
    cin >> term;

    int x = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == term) {
            x++;
        }
    }

    cout << "Frequency of is " << term << " = " << x;

    return 0;
}