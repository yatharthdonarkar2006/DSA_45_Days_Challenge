#include <iostream>
using namespace std;

int add(int a, float b);


int main()
{
    
    int a;
    float b;
    cout<<("enter the number : ");
    cin>>a;
    cout<<("enter the number : ");
    cin>>b;
    
    cout<< add(a, b)<<endl;
    
    return 0;
}

int add(int a, float b)                      
{
return b+a;
}