#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{

    vector<int> v = {1, 3, 2, 4, 3, 2, 3, 7};
    unordered_map<int, int> mpp;

    for (int i = 0; i <v.size(); i++)
    {
        mpp[v[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}