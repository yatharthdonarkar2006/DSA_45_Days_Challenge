#include <iostream>
using namespace std;

int FactorialOfN(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * FactorialOfN(n - 1);
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << FactorialOfN(i) << endl;
    }
    return 0;
}


//OUTPUT

/*
enter number : 5

1
2
6
24
120

*/