#include <iostream>
using namespace std;
int main()
{

    int month;

    cout << "Enter the Month (1-12): ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << " JANUARY ";
        break;

    case 2:
        cout << " FEBRUARY ";
        break;

    case 3:
        cout << " MARCH ";
        break;

    case 4:
        cout << " APRIL ";
        break;

    case 5:
        cout << " MAY ";
        break;

    case 6:
        cout << " JUNE ";
        break;

    default:
        cout << " Rest of the  6 months ";
    }

    return 0;
}