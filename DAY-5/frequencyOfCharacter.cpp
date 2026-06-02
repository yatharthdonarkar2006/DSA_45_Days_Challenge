#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Programming";
    char target;
    int count = 0;
    cout << "enter string : ";
    cin >> target;

    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }
    cout << "Frequency" << " " << target << " " << count;
    return 0;
}