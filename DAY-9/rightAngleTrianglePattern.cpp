#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_2(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " *";
            }
            cout << " " << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the Number of Rows : ";
    cin >> n;
    Pattern p2;
    p2.pattern_2(n);
}

/*
 * 
 * * 
 * * * 
 * * * * 
 * * * * * 
*/