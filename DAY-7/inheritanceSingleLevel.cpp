#include <iostream>
using namespace std;

class Parent
{
public:
    string name = "12";

    void show()
    {
        cout << "Sleeping.....1\n";
        cout << name ;
    }
};

class Child : public Parent
{
    
    
};




int main()
{
    Child c1;
    c1.show();
     
    return 0;
}