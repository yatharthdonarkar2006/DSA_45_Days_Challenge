#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;
    int originalNum = num; 

    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (rev == originalNum) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    
    return 0;
}
