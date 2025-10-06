#include <iostream>
using namespace std;
enum enScreenColor
{
    Red = 1,
    Blue = 2,
    Green = 3,
    Yellow = 4
};
int main()
{
    int c;
    enScreenColor Color;

    cin >> c;
    Color = (enScreenColor)c;
    switch (Color)
    {
    case enScreenColor::Red:
        system("Color 4F");
        break;
    case enScreenColor::Blue:
        system("Color 1F");
        break;
    case enScreenColor::Yellow:
        system("Color 6F");
        break;
    default:
        system("Color 2F");
    }
}