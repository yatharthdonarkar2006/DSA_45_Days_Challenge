#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        /*char ch = 'A';
           for (int j = 1; j <= i; j++)
           {
               cout << ch << " ";
               ch++;
           }*/
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

A
A B
A B C
A B C D
A B C D E

*/