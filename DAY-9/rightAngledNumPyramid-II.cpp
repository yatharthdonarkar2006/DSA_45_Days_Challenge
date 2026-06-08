#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_4(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
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
    Pattern p4;
    p4.pattern_4(n);
}

/*
1 
22 
333 
4444 
55555 
*/