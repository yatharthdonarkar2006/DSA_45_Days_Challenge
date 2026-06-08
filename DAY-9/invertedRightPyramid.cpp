#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_5(int n)
    {
        for (int i = n; i >= 1; i--)
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
    Pattern p5;
    p5.pattern_5(n);
}

/*
 * * * * * 
 * * * * 
 * * * 
 * * 
 *
 */