#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_p7(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= (n - i); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= ((2 * i) - 1); j++)
            {
                cout << "*";
            }
            cout << " " << endl;
        }
    }

    void pattern_p8(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * (n - i) + 1; j++)
            {
                cout << "*";
            }
            cout << " " << endl;
        }
    }
};

class Pattern1
{
public:
    void pattern_p7(int n)
    {

        for (int i = 1; i <= 2 * n - 1; i++)
        {
            int star = i;
            if (i > 3)
            {
                star = (2 * n - i);
            }
            for (int j = 1; j <= star; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    Pattern1 p7;
    p7.pattern_p7(n);
    //p7.pattern_p8(n);
}

/*
 *
 ***
 *****
 *******
 *********
 */