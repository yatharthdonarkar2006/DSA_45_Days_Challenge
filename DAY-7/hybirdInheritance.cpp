#include <iostream>
using namespace std;

class A
{
public:
    string name = "ABC from Father";

    void show()
    {
        cout << "From Father......\n";
        cout << name << endl;
    }
};

class B : public A
{
    public :
    string name1 = "ABC from Mother";
    void show2()
    {
        cout << "From Mother......\n";
        cout << name1 << endl ;
    } 
};

class C : public A , public B 
{
    public :
    void show3()
    {
        cout << "I am Child.....\n";
        
    } 
};



int main()
{
    C c1;
    
    c1.show2();
    c1.show3();
cout <<   " " << c1.name1;
    return 0;
}