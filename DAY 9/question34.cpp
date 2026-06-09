#include <iostream>
using namespace std;

int main() {
    int n = 5;

    while (n >= 1) {
        int num = 1;

        while (num <= n) {
            cout << num;
            num++;
        }

        cout << endl;
        n--;
    }

    return 0;
}