#include <iostream>
using namespace std;
using ll=long long;
int main(){
    int T;
    cin>>T;
    int n;
    for(int i=0;i<T;i++){
        cin>>n;
        ll f=1;
        for(int j=1;j<=n;j++){
            f*=j;
        }
        cout<<f<<endl;
    }
}