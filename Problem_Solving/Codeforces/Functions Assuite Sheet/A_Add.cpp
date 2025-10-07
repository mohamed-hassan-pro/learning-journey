#include <iostream>
#include <algorithm>
using namespace std;
void sort(int a[],int n)
{
    sort(a,a+n);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,n);
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i];

    }
    
    return 0;
}
