#include <iostream>
using namespace std;

class Student
{
 public :
    string name;
    int age;

    Student()
    {
        cout << "Default Constructor called......\n";
    }

    Student(string n, int a)
    {
        name = n;
        age = a;

        cout << "Parametrized Constructor called......\n";
    }
};

int main()
{

    Student s1;
    Student s2("Yatharth", 20);

    return 0;
}