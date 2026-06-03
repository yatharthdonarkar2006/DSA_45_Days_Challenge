#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    void getData()
    {
        cout << name << endl;
        cout << age << endl;
    }

    void setData()
    {
        name = "YATHARTH";
        age = 20;
    }
};

int main()
{

    Student s1;
    s1.setData();
    s1.getData();
    return 0;
}