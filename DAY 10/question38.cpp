#include <iostream>
using namespace std;

int main() {
    int  n = 5;

    for (int i = n; i >= 1; i--) {

        for (int blank = 0; blank < n - i; blank++) {
            cout << " ";
        }

        for (int star = 0; star < (2 * i - 1); star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}