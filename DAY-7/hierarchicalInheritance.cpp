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

class Child1 : public Parent
{
    public :
    void show2()
    {
        cout << "CHILD 1\n";
        cout << name ;
    } 
};

class Child2 : public Parent
{
    public :
    void show3()
    {
        cout << "CHILD 2\n";
        cout << name ;
        
    } 
};


int main()
{
    Child1 c1;
    c1.show();
    c1.show2();
    Child2 c2;
    c2.show3();
    c2.show();

    return 0;
}