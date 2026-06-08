#include <iostream>
using namespace std;

class Pattern
{
public :
    void p1_1(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 1; j <= (n - i); j++)
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
    cout << "enter n: ";
    cin >> n;
    Pattern p1;
    p1.p1_1(n);
}

/*
00000 
1111 
222 
33 
4 
*/