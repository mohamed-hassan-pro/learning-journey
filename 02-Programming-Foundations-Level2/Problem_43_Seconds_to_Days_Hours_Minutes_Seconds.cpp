#include <iostream>
#include <cmath>
using namespace std;
void ConvertSeconds(int Total_Seconds)
{
    const int Seconds_Per_Minute = 60;
    const int Seconds_Per_Hour = 60 * Seconds_Per_Minute;
    const int Seconds_Per_Day = 24 * Seconds_Per_Hour;

    int Days = Total_Seconds / Seconds_Per_Day;
    int remaining_Seconds = Total_Seconds % Seconds_Per_Day;

    int Hours = remaining_Seconds / Seconds_Per_Hour;
    remaining_Seconds %= Seconds_Per_Hour;

    int Minute = remaining_Seconds / Seconds_Per_Minute;

    int Second = remaining_Seconds % Seconds_Per_Minute;

    cout << Days << " Days, " << Hours << " Hours, " << Minute << " Minutes, and " << Second << " Seconds." << endl;
}
int main()
{
    int Total_Seconds;
    cout << "Enter the Number of Seconds?" << endl;
    cin >> Total_Seconds;
    ConvertSeconds(Total_Seconds);
    return 0;
}