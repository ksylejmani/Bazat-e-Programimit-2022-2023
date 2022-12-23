#include<iostream>
#include<math.h>
using namespace std;
const int m=3,n=4;
int diferenca(int A[m][n]);
int main(){
    int A[m][n]={{2,-1,3,5},{0,-6,2,3},{-10,1,9,-2}};
    int s=diferenca(A);
    cout<<"Difrenca: "<<s<<endl;
    return 0;
}
int diferenca(int A[m][n]){
    int sp=0,sn=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]<0){
                sn+=A[i][j];
            }
            else{
                sp+=A[i][j];
            }
        }
    }
    int s=abs(sp-abs(sn));
    return s;
}