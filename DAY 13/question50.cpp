#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of element in the array:";
    cin >> n;

    int arr[n];
    float sum = 0, average;
    cout << "Enter "<< n << " elements"<< endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}