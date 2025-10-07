#include <iostream>
using namespace std;
void maximum (int n[]){
    int max=n[0];
    for(int i=0;i<3;i++){
        max=(n[i]>max)?n[i]:max;
    }
    cout<<"max "<<max<<endl;
}
void minimum (int n[]){
    int min=n[0];
    for(int i=0;i<3;i++){
        min=(n[i]<min)?n[i]:min;
    }
    cout<<"min "<<min;
}
int main(){
    int n[3];
    for(int i=0;i<3;i++){
        cin>>n[i];
    }
    maximum(n);
    minimum(n);
    return 0;
}