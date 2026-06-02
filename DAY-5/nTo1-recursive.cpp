#include <iostream>
using namespace std;

int greet(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    greet(n - 1);
}


int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    cout<<greet(n);
    return 0;
}