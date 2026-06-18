#include <iostream>
// #include<bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    queue<int> temp = q;
    while (temp.size() > 0)
    // while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    cout << "Original_queue : " << q.size() << endl;
    cout << "Temp_queue : " << temp.size();
    return 0;
}
