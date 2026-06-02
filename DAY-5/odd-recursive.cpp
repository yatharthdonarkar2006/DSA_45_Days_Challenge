#include <iostream>
using namespace std;

void odd(int n)
{
    if (n == 0)
    {
        return;
    }

    odd(n - 1);
    if (n % 2 != 0)
    {
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    odd(n);
    return 0;
}

/*

enter number : 6

1
3
5


*/