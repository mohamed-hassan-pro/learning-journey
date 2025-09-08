#include <iostream>
#include <cmath>
using namespace std;
float CircleArea(float bi, float Diameter)
{
    float CircleArea = (bi * pow(Diameter, 2)) / 4;
    return CircleArea;
}
int main()
{
    const float bi = 3.14;
    float Diameter;
    cout << "enter the Diameter?\n";
    cin >> Diameter;
    cout << "Circle Area = " << ceil(CircleArea(bi, Diameter));
    return 0;
}