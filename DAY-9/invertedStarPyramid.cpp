#include <iostream>
using namespace std;

class Pattern
{
public :
    void pattern_p8(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i-1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2*(n-i)+1; j++)
            {
                cout << "*";
            }
            cout << " " << endl;
        }
    }
};

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    Pattern p8;
    p8.pattern_p8(n);
}

/*
********* 
 ******* 
  ***** 
   *** 
    * 
*/