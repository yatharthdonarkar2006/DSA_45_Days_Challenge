#include <iostream>
// #include<bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> temp = st;
    while (temp.size() > 0)
    // while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    cout << "Original_Stack : " << st.size() << endl;
    cout << "Temp_Stack : " << temp.size();
    return 0;
}
