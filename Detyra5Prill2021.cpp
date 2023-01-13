#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=5;
    int A[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                A[i][j]=0;
            }
            else if(j>i){
                A[i][j]=i+2;
            }
            else{
                A[i][j]=j-4; //-m+1+j;
            }
            cout<<setw(4)<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}