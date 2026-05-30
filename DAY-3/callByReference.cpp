#include <iostream>
using namespace std;

void change(int &a)
{
    a = 100;
    cout << "before" << a << endl;;
} 

int main()
{
    int x = 2;
    
    change(x);
    cout << "after" << x << endl;
    return 0;
}