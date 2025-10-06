#include <iostream>
using namespace std;
int main()
{
    short Month;
    cout << "Enter the Month: ";
    cin >> Month;

    /*if (Month == 1)
        cout << "January";
    else if (Month == 2)
        cout << "February";
    else if (Month == 3)
        cout << "March";
    else if (Month == 4)
        cout << "April";
    else if (Month == 5)
        cout << "May";
    else if (Month == 6)
        cout << "June";
    else if (Month == 7)
        cout << "July";
    else if (Month == 8)
        cout << "August";
    else if (Month == 9)
        cout << "September";
    else if (Month == 10)
        cout << "October";
    else if (Month == 11)
        cout << "November";
    else if (Month == 12)
        cout << "December";
    else
        cout << "Wrong Month";*/
    switch (Month)
    {
    case '1':
        cout << "January";
        break;
    case '2':
        cout << "February";
        break;
    case '3':
        cout << "March";
        break;
    case '4':
        cout << "April";
        break;
    case '5':
        cout << "May";
        break;
    case '6':
        cout << "June";
        break;
    case '7':
        cout << "July";
        break;
    case '8':
        cout << "August";
        break;
    case '9':
        cout << "September";
        break;
    case '10':
        cout << "October";
        break;
    case '11':
        cout << "November";
        break;
    case '12':
        cout << "December";
        break;
    default:
        cout << "Wrong Month";
        break;
    }
    return 0;
}