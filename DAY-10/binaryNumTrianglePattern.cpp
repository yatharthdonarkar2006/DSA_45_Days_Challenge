#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_3(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            int start = 1;
            if(i % 2 == 0){
                start = 0;
                }
            for (int j = 1; j <= i; j++)
            {
                cout << start;
                start = 1 - start;
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
    Pattern p3;
    p3.pattern_3(n);
}

/*

1 
01 
101 
0101 
10101 

*/