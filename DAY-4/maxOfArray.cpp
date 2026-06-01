#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 9, 2, 7, 1};
    int max = 0;

    for (int i = 0; i < arr[i-1]; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}
