#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    vector<int> arr = {20, 40, 10, 60, 15, 2};

    selectionSort(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}