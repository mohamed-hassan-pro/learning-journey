#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string d;
    cin>>d;
    int sum = 0;
    for (size_t i = 0; i < N; i++)
    {
        //d[5]=13305
        //d[0]='1'=49 in ascii code
        //'0'=48 in ascii code
        sum += d[i]-'0';//تحويل الحرف إلى رقم صحيح
    }
    cout << sum;
    return 0;
}