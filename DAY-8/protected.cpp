#include <iostream>
using namespace std;

class Parent
{
protected:
    string name = "Yatharth";
};

class Child : protected Parent
{
public:
    void getData()
    {
        cout << this->name;
    }
};

int main()
{

    Child c1;
    c1.getData();

    return 0;
}