#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;

    Student()
    {
        cout << " from this Pointer : " << this << endl;
    }
};

int main()
{

    Student s1;
    cout << " from Address Operator :  " <<&s1 ;

    return 0;
}