#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "enter string : ";
    cin >> name;
    name.append("   hello");
    cout << name;
    return 0;
}
