#include <iostream>
using namespace std;

void greet(int n)
{
    if (n == 0)
    {
        return;
    }

    greet(n - 1);

    cout << n << endl;
}

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    greet(n);
    return 0;
}