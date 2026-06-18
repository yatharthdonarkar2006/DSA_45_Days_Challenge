#include <iostream>
// #include<bits/stdc++.h>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(33);
    s.insert(21);
    s.insert(54);
    s.insert(78);
    s.insert(1);
    cout << "Before : ";
    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;

    cout << "Erase 21 : " << s.erase(21) << endl;

    cout << "Count 54 : " << s.count(54) << endl;

    cout << "Updated : ";

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << "\nFind '10' : ";
    auto it = s.find(10);
    if (it != s.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}

/*
Output : 

Before : 1 21 33 54 78 
Erase 21 : 1
Count 54 : 1
Updated : 1 33 54 78 
Find '10' : Not Found

*/