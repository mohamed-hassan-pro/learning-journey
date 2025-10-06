#include <iostream>
using namespace std;
enum enWeekDay
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};
enWeekDay ReadWeekDay()
{
    enWeekDay WeekDay;
    int wd;
    cout << "Enter the Day number: ";
    cin >> wd;
    return (enWeekDay)wd;
};
string GetWeekDayName(enWeekDay WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDay::Sunday:
        cout << "Its Sunday";
        break;
    case enWeekDay::Monday:
        cout << "Its Monday";
        break;
    case enWeekDay::Tuesday:
        cout << "Its Tuesday";
        break;
    case enWeekDay::Wednesday:
        cout << "Its Wednesday";
        break;
    case enWeekDay::Thursday:
        cout << "Its Thursday";
        break;
    case enWeekDay::Friday:
        cout << "Its Friday";
        break;
    case enWeekDay::Saturday:
        cout << "Its Saturday";
        break;
    default:
        cout << "Wrong Day";
        break;
    }
}
int main()
{
    ReadWeekDay();
    cout << "today is " << GetWeekDayName(ReadWeekDay());
    return 0;
}