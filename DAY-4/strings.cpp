#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "enter string : ";
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {

        cout << name[i] << " ";
    }
    return 0;
}
