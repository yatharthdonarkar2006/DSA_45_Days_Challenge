#include <iostream>
using namespace std;

int sumOfN(int n)
{
    if (n == 0)           //if (n <= 1) 
    {
        return 0;         // return 1;   
    }
    
    return n+ sumOfN(n-1);
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    cout << sumOfN(n);
    return 0;
}