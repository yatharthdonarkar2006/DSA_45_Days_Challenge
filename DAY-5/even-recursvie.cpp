#include <iostream>
using namespace std;

void even(int n)
{
    if (n == 0)
    {
        return;
    }

    even(n - 1);
    if (n % 2 == 0)
    {
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    even(n);
    return 0;
}

/*

enter number : 6

2
4
6

*/