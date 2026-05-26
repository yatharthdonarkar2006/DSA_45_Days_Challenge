#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    /*for (i = 1; i <= 10; i++)                                            // for loop
    {
        cout << "5 * " << i << " = " << 5 * i << endl;
    }*/


    /*while (i <= 10)                                                     // while loop
    {
        cout << "5 * " << i << " = " << 5 * i << endl;
        i++;
    }*/


    do                                                                    // do-while loop
    {
        cout << "5 * " << i << " = " << 5 * i << endl;
        i++;
    } while (i <= 10);


    return 0;
}