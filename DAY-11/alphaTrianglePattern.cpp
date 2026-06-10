#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the n : " ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (char j = 'E' - i + 1; j <= 'E' ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

Enter the n : 5
E 
D E 
C D E 
B C D E 
A B C D E

*/
