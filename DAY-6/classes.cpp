#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
};

int main()
{

    Student s1;
    s1.name = "Yatharth";
    s1.age = 20;
    cout << s1.name<<"  " << s1.age;
    return 0;
}