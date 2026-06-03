#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Yatharth";
    int age = 20;

    void Show()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

int main()
{

    Student s1;
    Student s2(s1);
    s1.Show();
    s2.Show();

    return 0;
}