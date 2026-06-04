#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;

    Student(){

    }

    Student(Student &a)
    {
        this->name = a.name;
        this->age = a.age;
    }
};

int main()
{

    Student s1;
    s1.name = "Yaatharth";
    s1.age = 19;
    cout << "Name : " << s1.name << " \n" << "Roll No : " << s1.age << endl;
    Student s2(s1);

    cout << "Name : " << s2.name << "\n " << "Roll No : " << s2.age << endl;

    return 0;
}