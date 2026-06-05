#include <iostream>
using namespace std;

class Car
{
private:
    void fuelCheck()
    {
        cout << "Fuel Checking .... \n";
    }
    void batteryCheck()
    {
        cout << "Battery Checking .... \n";
    }

public:
    void start()
    {
        fuelCheck();
        batteryCheck();

        cout << "Car Started ......";
    }
};

int main() 
{

    Car c1;
    c1.start();

    return 0;
}