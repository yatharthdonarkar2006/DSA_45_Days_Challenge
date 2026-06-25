#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
                ;
            }
        }
    }
}

int main()
{

    vector<int> arr = {20, 40, 10, 60, 15, 2};

    bubbleSort(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}