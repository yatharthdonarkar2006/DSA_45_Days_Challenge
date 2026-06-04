#include<iostream>
using namespace std;

class Student{

    public : 

 string name = "YD";

 Student(){
    cout << "name : "<< name << " "<< "Constructor called....\n" ;
 }

~Student(){
    cout << "name : "<< name << " "<< "Destructor called....\n" ;

}


};

int main(){

Student s1;


    return 0;
}