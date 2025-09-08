#include <iostream>
#include <cmath>
using namespace std;
double RectangleArea(double side, double Diagonal)
{
    double RectangleArea = side * sqrt(pow(Diagonal, 2) - pow(side, 2));
    return RectangleArea;
}
int main()
{
    double side, Diagonal;
    cout << "enter the Length Of a rectangle Side?\n";
    cin >> side;
    cout << "enter the Diagonal?\n";
    cin >> Diagonal;
    cout << "Area of a rectangle = " << RectangleArea(side, Diagonal);
    return 0;
}