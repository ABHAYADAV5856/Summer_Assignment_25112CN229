#include <bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    string k = s1 + s1;
    return (k.find(s2) != string::npos);
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (isRotation(s1, s2))
        cout << "The strings are rotations of each other." << endl;
    else
        cout << "The strings are not rotations of each other." << endl;

    return 0;
}