#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a1[r][c],a2[r][c],f[r][c];
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>a1[row][col];
        }
    }
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>a2[row][col];
        }
    }
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            f[row][col]=0;
        }
    }
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            //i<c = i<r لان r=c
            for(int i=0;i<c;i++){
                f[row][col]+=a1[row][i]*a2[i][col];
            }
        }
    }
    for(int row=0;row<r;row++){
        cout<<endl;
        for(int col=0;col<c;col++){
            cout<<f[row][col]<<" ";
        }
    }
    return 0;
}