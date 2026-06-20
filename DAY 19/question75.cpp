#include <iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter number of rows and columns: ";
    cin >> row >> column;

    int arr[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}