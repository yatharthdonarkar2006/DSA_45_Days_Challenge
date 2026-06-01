#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 5, 8, 1, 9};
    int num;
    cout << "enter number : ";
    cin >> num;

    for (int i = 0; i < 5; i++)
    {

        if ( arr[i] == num)
        {
            cout << "number is found";
        }
    }

    return 0;
}