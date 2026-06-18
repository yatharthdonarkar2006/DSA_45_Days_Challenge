#include <iostream>
// #include<bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{

    stack<int> st1, st2, st3;

    st1.push(10);
    st1.push(20);
    st2.push(30);
    st2.push(40);
    

cout << "Before Swap : " << st1.top() << " and " << st2.top() << endl;
st1.swap(st2);
cout << "After Swap : " << st1.top() << " and " << st2.top() << endl;
    return 0;
}
