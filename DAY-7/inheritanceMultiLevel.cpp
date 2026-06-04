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
    public :
    void show2()
    {
        cout << "Sleeping.....2\n";
        cout << name ;
    } 
};

class GrandChild : public Child
{
    public :
    void show3()
    {
        cout << "Sleeping.....3\n";
        cout << name ;
        
    } 
};


int main()
{
    GrandChild gc;
    gc.show();
    gc.show2();
    gc.show3();

    return 0;
}