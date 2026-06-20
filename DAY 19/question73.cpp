#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout << "Enter number of rows and columns: ";
    cin >> a >> b;

    int A[10][10], B[10][10], add[10][10];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            add[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}