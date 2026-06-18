#include <iostream>
// #include<bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int> pq;

    pq.push(110);
    pq.push(20);
    pq.push(150);
    pq.push(40);
    pq.push(50);

    cout << pq.top() << endl;

    priority_queue<int> temp = pq;
    while (temp.size() > 0)
    // while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    cout << "Original_priorityQueue : " << pq.size() << endl;
    cout << "Temp_priorityQueue : " << temp.size();
    return 0;
}
