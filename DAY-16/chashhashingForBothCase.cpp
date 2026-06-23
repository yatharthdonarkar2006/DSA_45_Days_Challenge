#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string ch = "ABBdscsfbCCA";
    
    vector<int> cnt(123, 0);

    for (int i = 0; i < ch.size(); i++)
    {
        cnt[ch[i]]++;
    }
    cout << cnt['A'];

    return 0;
}
