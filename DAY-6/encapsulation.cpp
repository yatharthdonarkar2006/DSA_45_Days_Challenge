#include <iostream>
using namespace std;
class Bank
{
private:
    int bankBalance = 10000;

public:
    void get()
    {
        cout << bankBalance << endl;
    }

    void set(int n)
    {
        bankBalance += n;
    }
};

int main()
{

    Bank b1;
    b1.set(5000);
    b1.get();
    return 0;
}