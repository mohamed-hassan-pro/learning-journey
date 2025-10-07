#include <iostream>
using namespace std;
int main(){
    int T,r;
    cin>>T;
    for(int h=0;h<T;h++){
        int N;
        cin>>N;
        int A[N];
        for(int k=0;k<N;k++){
            cin>>A[k];
        }
        int min=2e9;
        for (int i = 0; i <N ; i++)
        {
            for (int j=i+1; j <N ; j++)
            {
                r=A[i] + A[j] + (j - i);
                min=(r<min)?r:min;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}