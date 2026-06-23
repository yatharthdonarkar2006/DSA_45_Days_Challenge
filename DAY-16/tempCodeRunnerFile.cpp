#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string ch = "abbccdde";
    vector<int> cnt(26, 0);

    for (int i = 0; i < ch.size(); i++)
    {
        cnt[ch[i] - 'a']++;
    }
    cout << cnt['t' - 'a'];
    return 0;
}
