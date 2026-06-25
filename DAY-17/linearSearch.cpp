#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int x)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    int x, n;

    cout << "x : ";
    cin >> x;

    cout << "n : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution s1;
    int result = s1.search(arr, x);

    cout << "Index = " << result;

    return 0;
}