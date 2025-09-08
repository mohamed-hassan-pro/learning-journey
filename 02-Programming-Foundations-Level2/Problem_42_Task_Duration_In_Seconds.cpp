#include <iostream>
#include <cmath>
using namespace std;
int TotalSeconds(int days, int hours, int minutes, int seconds)
{
    float TotalSeconds = days * 24 * pow(60, 2) + hours * pow(60, 2) + minutes * 60 + seconds;
    return TotalSeconds;
}
int main()
{
    int days, hours, minutes, seconds;
    cout << "enter the number of days?\n";
    cin >> days;
    cout << "enter the number of hours?\n";
    cin >> hours;
    cout << "enter the number of minutes?\n";
    cin >> minutes;
    cout << "enter the number of seconds?\n";
    cin >> seconds;
    cout << "The TotalSeconds = " << round(TotalSeconds(days, hours, minutes, seconds)) << " Seconds";
    return 0;
}