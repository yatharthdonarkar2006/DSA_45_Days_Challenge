#include <iostream>
using namespace std;

class Student
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{

    Student s1;
    cout << s1.sum(5, 5) << endl;
    cout << s1.sum(5, 5, 5) << endl;

    return 0;
}