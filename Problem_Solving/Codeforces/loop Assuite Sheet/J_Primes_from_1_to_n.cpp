#include <iostream>
using namespace std;
using ll=long long;
int main(){
    int N;
    cin>>N;
    bool first=1;
    for(int i=2;i<=N;i++){
        bool p=1;
        for(int j=2;j<i;j++){
//العدد الاولي لا يقبل القسمة علي اي عدد غير نفسه والواحد فقط
//لو نجرب هنا i=4 و j=2 فا 4÷2=2 معناه انه قبل القسمة علي عدد تاني غير نفسه والواحد فا مش هيكون اولي
            if(i%j==0){
                p=0;
                break;
            }
        }
        if(p){
            cout<<i;
            if(i!=N-1){
                cout<<" ";
            }
        }
}
}