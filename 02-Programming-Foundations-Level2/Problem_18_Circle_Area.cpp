#include <iostream>
#include <cmath>
using namespace std;
float CircleArea(float bi, float Radius)
{
    float CircleArea = (bi * pow(Radius, 2));
    return CircleArea;
}
int main()
{
    const float bi = 3.14;
    float Radius;
    cout << "enter the Radius?\n";
    cin >> Radius;

    cout << "Circle Area = " << ceil(CircleArea(bi, Radius));
    return 0;
}