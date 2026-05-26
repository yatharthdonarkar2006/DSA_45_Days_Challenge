#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int Fact = 1;
    for (int i = 1; i <= n; i++)
    {
        Fact = Fact * i;
    }
    cout << "Factorial of " << n << " is: " << Fact << endl;
    return 0;
}