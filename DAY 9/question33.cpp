#include <iostream>
using namespace std;

int main() {
    int s = 5;

    while (s > 0) {
        for (int j = 0; j < s; j++) {
            cout << "*";
        }
        cout << endl;
        s--;
    }

    return 0;
}