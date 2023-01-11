#include<iostream>
using namespace std;
int main(){
    const int m=5;
    int A[m][m];
    cout<<"Vlerat e matrices\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){

            cout<<"A["<<i+1<<"]["<<j+1<<"]: ";
            cin>>A[i][j];
        }
    }
    int s=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i>j && A[i][j]>=5 && A[i][j]<25){
                s+=A[i][j];
            }
        }
    }
    cout<<"s="<<s<<endl;
    return 0;
}