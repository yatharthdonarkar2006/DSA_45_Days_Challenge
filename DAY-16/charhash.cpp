#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string ch = "abbcca";
    vector<int> cnt(26, 0);

    for (int i = 0; i < ch.size(); i++)
    {
        cnt[ch[i] - 'a']++;
    }
    for(auto it : cnt)
    {
    cout << it << " ";
    }
    return 0;
}
