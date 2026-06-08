#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_p6(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                cout << j;
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
    Pattern p6;
    p6.pattern_p6(n);
}
/*
12345 
1234 
123 
12 
1
*/