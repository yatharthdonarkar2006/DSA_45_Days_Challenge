#include <iostream>
using namespace std;

int main()
{
    int a = 120;
    int *ptr = &a;

    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}