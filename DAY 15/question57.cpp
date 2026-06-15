#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n / 2; i++)
    {
        int X = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = X;
    }

    cout << "Reverse of the given array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}