#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the order of square matrix: ";
    cin >> n;

    int arr[10][10];
    int sum = 0;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    cout << "Diagonal sum of the matrix is = " << sum;

    return 0;
}