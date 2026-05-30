#include <iostream>
using namespace std;

void greet(string name)
{
    cout << "HELLO " << name << endl;
}

int multi(int a, float b)
{

return b*a;
  
}
float sub(int a, float b)
{

return b-a;
   
}
double div(int a, float b)
{

return b/a;
}

short add(int a, float b)
{
return b+a;
}

int main()
{
    greet("YATHARTH");
    int a;
    float b;
    cout<<("enter the number : ");
    cin>>a;
    cout<<("enter the number : ");
    cin>>b;
    
    cout<< add(a, b)<<endl;
    cout<< sub(a, b)<<endl;
    cout<< multi(a, b)<<endl;
    cout<< div(a, b)<<endl;

    return 0;
}