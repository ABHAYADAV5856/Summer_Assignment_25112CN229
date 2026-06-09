#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int r = 1; r <= size; r++) {
        int c = 1;

        while (c <= size) {
            if (r == 1 || r == size || c == 1 || c == size)
                cout << "*";
            else
                cout << " ";

            c++;
        }

        cout << endl;
    }

    return 0;
}