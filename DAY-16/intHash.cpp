#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 3, 2, 4, 2, 4, 2, 1, 3};
    vector<int> h(5, 0);

    for (int i = 0; i < v.size(); i++)
    {
        h[v[i]]++;
    }
    for (auto it : h)
    {
        cout << it << " ";
    }
    return 0;
}