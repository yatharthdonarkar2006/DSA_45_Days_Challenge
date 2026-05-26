#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a marks: ";
    cin >> number;

    if (number >= 90 && number <= 100) {
        cout << "A+" << endl;
    } else if (number >= 80 && number < 90) {
        cout << "A" << endl;
    } else if (number >= 70 && number < 80) {
        cout << "B+" << endl;
    }else if (number >= 60 && number < 70) {
        cout << "B" << endl;
    } else if (number >= 50 && number < 60) {
        cout << "C+" << endl;
    } else if(number <= 100){
        cout << "invalid input" << endl;
    }else {
        cout << "Failed" << endl;
    }

    return 0;
}