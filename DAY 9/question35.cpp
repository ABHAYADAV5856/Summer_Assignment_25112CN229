#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    int n = 1;

    while (n <= 5) {
        int a = 0;

        while (a < n) {
            cout << ch;
            a++;
        }

        cout << endl;
        ch++;
        n++;
    }

    return 0;
}