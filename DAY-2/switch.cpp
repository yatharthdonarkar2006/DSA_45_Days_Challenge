#include<iostream>
using namespace std;

int main(){

 int number;
 cout<<"ENTER NUMBER (1-7): ";   
 cin >> number;
 
 switch (number){

    case 1:
        cout<<"MONDAY"<<endl;
        break;
    case 2:
        cout<<"TUESDAY"<<endl;
        break;
    case 3:
        cout<<"WEDNESDAY"<<endl;
        break;
    case 4:
        cout<<"THURSDAY"<<endl;
        break;
    case 5:
        cout<<"FRIDAY"<<endl;
        break;
    case 6:
        cout<<"SATURDAY"<<endl;
        break;
    case 7:
        cout<<"SUNDAY"<<endl;
        break;
    default:
        cout<<"INVALID INPUT"<<endl;
    
 }

  return 0;
 }







