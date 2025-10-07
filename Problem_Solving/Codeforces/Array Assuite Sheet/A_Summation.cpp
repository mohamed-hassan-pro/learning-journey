#include <iostream>
using namespace std;
using ll=long long;
int main() {
    int N;
    cin>>N;
    ll A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    ll sum=0;
    for(int i=0;i<N;i++){
        sum+=A[i];
    }
    
    if(sum<0){
        sum*=-1;
    }
    cout<<sum;
    
    return 0;
}