#include <iostream>
using namespace std;

void greet(string name)
{
    cout << "HELLO " << name << endl;
}

int number(int a, float b, double c)
{
   return a;
   return b;
   return c;
}

int main()
{
    greet("YATHARTH");
    cout<< number(12, 12.1, 1234);

    return 0;
}