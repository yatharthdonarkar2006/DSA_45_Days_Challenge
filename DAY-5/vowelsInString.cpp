#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello World";

    int vowelCount = 0;
    /*for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }*/
    for (int i = 0; i > str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||)
        {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}