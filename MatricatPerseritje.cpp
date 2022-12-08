#include<iostream>
using namespace std;
int main(){
    const int m=4;
    int A[m][m]={{0,4,-1,2},{6,7,-3,0},{4,1,10,2},{5,7,-8,1}};
    int r1=0,r2=0,r3=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j=j+1/* ose j++*/){
            if(i==j){
                if(A[i][j]%2==0){
                    r1++;
                }
            }
            else if(i<j){
                if(A[i][j]<0){
                        r2++;
                }
            }
            else{
                r3=r3*A[i][j];
            }
        }
    }
    cout<<"Numri i vlerave cift ne diagonale: "<<r1<<endl;
    cout<<"Numri i vlerave negative mbi diagonale: "<<r2<<endl;
    cout<<"Prodhimi i vlerave nen diagonale: "<<r3<<endl;
    return 0;
}