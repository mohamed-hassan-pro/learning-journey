#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    //s=9
    //8 4 8 5 4 3 4 3 5
    //0 1 2 3 4 5 6 7 8
    for(int i=0;i<s;i++){
        int count=0;
        if(a[i]%2==0){
            for(int k=0;k<s;k++){
            if(a[i]==a[k])
            count++;
            }
        }
        if(count%2!=0){
        cout<<"The element odd number of times is: "<<a[i];
        break;}
    }
    return 0;
}