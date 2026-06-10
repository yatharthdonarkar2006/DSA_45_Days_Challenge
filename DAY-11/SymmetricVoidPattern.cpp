#include <iostream>
using namespace std;

class Pattern
{
public:
    int space = 0;
    void pattern_upper(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "*";
            }
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "*";
            }
            cout << " " << endl;
            space += 2;
        }
    }
    void pattern_lower(int n)
    {
        space = (2 * n - 2);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << " " << endl;
            space -= 2;
        }
    }
};

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    Pattern p19;
    p19.pattern_upper(n);
    p19.pattern_lower(n);
}

/*

enter n: 5
*        * 
**      ** 
***    *** 
****  **** 
********** 
****  **** 
***    *** 
**      ** 
*        * 

*/