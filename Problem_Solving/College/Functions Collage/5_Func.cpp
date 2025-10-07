#include <iostream>
using namespace std;
/*
متتالية فيبوناتشي تبدأ برقمين:
F(0) = 0
F(1) = 1
كل رقم بعدها هو مجموع الرقمين السابقين:
F(n) = F(n-1) + F(n-2)
*/
void Fibonacci(int n)
{

    int a = 0, b = 1, next;
    if(n==0){cout<<"0";break;}
    if(n==1){cout<<"1"<<}
    for (size_t i = 2; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    cout<<b<<endl;
}
int main()
{
    int n;
    cin >> n;
    Fibonacci(n);
    return 0;
}