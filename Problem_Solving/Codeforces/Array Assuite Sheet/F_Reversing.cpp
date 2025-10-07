#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }//12321
     //01234
     bool r=1;
    for(int i=0;i<N;i++){
        if (A[i]!=A[N-1-i]){
            r=0;break;
        }
    }
        if(r){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    return 0;
}