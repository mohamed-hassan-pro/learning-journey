#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (size_t i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int min = 2e9;
    for (size_t i = 0; i < N; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    int count=0;
    for (size_t i = 0; i < N; i++)
    {
        if (min == A[i])
            count++;
    }
    if (count % 2 != 0)
        cout << "Lucky";
    else
        cout << "Unlucky";
    return 0;
}