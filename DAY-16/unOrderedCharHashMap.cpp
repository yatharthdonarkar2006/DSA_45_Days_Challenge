#include <iostream>
#include <unordered_Map>
#include <map>

using namespace std;

int main()
{

    string str = "ABCBAaabbeSda";
    unordered_map<char, int> mpp;

    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}