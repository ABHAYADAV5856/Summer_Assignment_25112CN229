#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};

    for (char ch : s)
    {
        freq[(unsigned char)ch]++;
    }

    char maxch;
    int maxfrequency = 0;

    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] > maxfrequency)
        {
            maxfrequency = freq[i];
            maxch = (char)i;
        }
    }

    cout << "Maximum occurring character: " << maxch << endl;
    cout << "Frequency: " << maxfrequency << endl;

    return 0;
}