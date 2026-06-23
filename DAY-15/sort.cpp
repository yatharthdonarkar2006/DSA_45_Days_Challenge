#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {12, 1, 3, 10, 50, 23, 7, 2};

    sort(v.begin() + 4, v.end() + 6);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}