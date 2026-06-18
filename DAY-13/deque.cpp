#include <iostream>
// #include<bits/stdc++.h>
#include <deque>
using namespace std;

int main()
{

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    for (auto it : dq)
    {
        cout << it << " ";
    }

    cout << endl;

    dq.pop_back();
    dq.pop_front();
    

    for (auto it : dq)
    {
        cout << it << " ";
    }

    return 0;
}
