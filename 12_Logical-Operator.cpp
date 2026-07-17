#include <iostream>
using namespace std;

int main()
{

    /*
              AND    OR   NOT
 && = Check if two condition are true
 || = Check if at least one of two conditions is true   ! = reverse the logical state of its operand

    */

    int temp;
    bool sunny = true;

    cout << " Enter the Temperature: ";
    cin >> temp;

    /*  Example of [&&] operator

     if(temp > 0 && temp < 30){
        cout << "The Temperature is good ";
     }  else  {
         cout << "The Temperature is bad";
     }         */

    //  Example of [||] operator

    if (temp <= 0 && temp >= 30)
    {
        cout << "The Temperature is bad";
    }
    else
    {
        cout << "The Temperature is good ";
    }

    //  Example of [!] operator
    if (!sunny)
    {
        cout << " Sunny outside ";
    }
    else
    {
        cout << "It is cloudy outside ";
    }

    return 0;
}