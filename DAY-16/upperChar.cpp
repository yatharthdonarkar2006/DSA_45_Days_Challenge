#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string ch = "ABBCCA";
    
    vector<int> cnt(26, 0);

    for (int i = 0; i < ch.size(); i++)
    {
        cnt[ch[i] - 'A']++;
    }
    for(auto it : cnt)
    {
    cout << it << " ";
    }
    return 0;
}
