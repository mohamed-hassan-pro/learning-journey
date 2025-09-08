#include <iostream>
#include <cmath>
using namespace std;
float CircleArea(float bi, float a, float Base)
{
    float CircleArea = bi * (pow(Base, 2) / 4) * ((2 * a - Base) / (2 * a + Base));
    return CircleArea;
}
int main()
{
    // a = SideOfIsoscelesTriangle
    float a, Base;
    const float bi = 3.14;
    cout << "enter the SideOfIsoscelesTriangle?\n";
    cin >> a;
    cout << "enter the Base?\n";
    cin >> Base;
    cout << "Circle Area Inscribed in an Isosceles Triangle = " << floor(CircleArea(bi, a, Base));
    return 0;
}