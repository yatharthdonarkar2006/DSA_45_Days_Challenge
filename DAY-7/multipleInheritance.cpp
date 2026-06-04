#include <iostream>
using namespace std;

class Father
{
public:
    string name = "ABC from Father";

    void show()
    {
        cout << "From Father......\n";
        cout << name << endl;
    }
};

class Mother
{
    public :
    string name1 = "ABC from Mother";
    void show2()
    {
        cout << "From Mother......\n";
        cout << name1 << endl ;
    } 
};

class Child : public Father , public Mother 
{
    public :
    void show3()
    {
        cout << "I am Child.....\n";
        
    } 
};


int main()
{
    Child c1;
    c1.show();
    c1.show2();
    c1.show3();
cout << c1.name << " " << c1.name1;
    return 0;
}