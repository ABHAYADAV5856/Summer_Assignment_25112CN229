#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        for (int s = n - i; s > 0; s--) {
            cout << " ";
        }

        int y = 1;
        while (y <= i) {
            cout << y;
            y++;
        }
        y = i - 1;
        while (y >= 1) {
            cout << y;
            y--;
        }
        cout << endl;
    }
    return 0;
}