#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_1(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
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
    cout << "Enter the Number of Rows and Columns : ";
    cin >> n;
    Pattern p1;
    p1.pattern_1(n);
}
// Output
/*
Enter the Number of Rows and Columns : 5
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

*/