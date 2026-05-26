#include <iostream>
using namespace std;

int globalVar = 10; // Global variable

int main() {

    int localVar = 5; // Local variable
    
    cout << "Global Variable: " << globalVar << endl; // Accessing global variable
    cout << "Local Variable: " << localVar << endl; // Accessing local variable

    return 0;
}