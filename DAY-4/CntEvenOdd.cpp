#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 5, 8, 1, 9, 4};
    int num;
    int count_Even = 0 , count_Odd = 0;

    for (int i = 0; i < 5; i++)
    {

        if ( arr[i]%2 == 0)
        {
            count_Even++;
        }
        else{
            count_Odd++;
        }
    }
    cout<<"count_even : " <<count_Even <<endl;
     cout<<"count_odd : " <<count_Odd;


    return 0;
}