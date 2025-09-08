#include <iostream>
using namespace std;
double RectangleArea(double Length, double Width)
{
    double RectangleArea = Length * Width;
    return RectangleArea;
}
int main()
{
    double Length, Width;
    cout << "enter the Length?\n";
    cin >> Length;
    cout << "enter the Width?\n";
    cin >> Width;
    cout << "Area of a rectangle = " << RectangleArea(Length, Width);
    return 0;
}