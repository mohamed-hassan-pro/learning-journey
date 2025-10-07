#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    for(int i=0;i<s;i++){
        bool y=false;
        for(int k=0;k<i;k++){
            if(a[i]==a[k]){
            y=true;
            break;
            }
        }
        if(y)
        continue;
        int count=0;
        for(int j=0;j<s;j++){
            if(a[i]==a[j])
            count++;
        }
        cout<<a[i]<<" occurs "<<count<<" times"<<endl;
    }
    return 0;
}