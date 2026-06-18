#include <iostream>
// #include<bits/stdc++.h>
#include <list>
using namespace std;

int main()
{

    list<int> ls;

    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    ls.push_back(50);

    for (auto it : ls)
    {
        cout << it << " ";
    }

    cout << endl;

    ls.pop_back();
    ls.pop_front();

    for (auto it : ls)
    {
        cout << it << " ";
    }

    return 0;
}
