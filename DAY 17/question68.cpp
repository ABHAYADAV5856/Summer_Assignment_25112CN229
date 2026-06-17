#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter the size of first array: ";
    cin >> a;
    int arr1[a];

    cout << "Enter the elements of first array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> b;
    int arr2[b];

    cout << "Enter the elements of second array: ";
    for(int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    cout << "Common elements in the above arrays are: ";

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}