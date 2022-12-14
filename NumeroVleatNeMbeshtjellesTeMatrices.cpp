#include<iostream>
using namespace std;
const int m=3,n=4;
int NumeroVlertM(int A[m][n], int t){
    int rez=0;
    int i=0;
    do
    {
        int j=0;
        do
        {
            if(i==0||j==0||i==m-1||j==n-1){
                if(A[i][j]==t){
                    rez++;
                }
            }
            j++;
        } while (j<n);
        i++;
    } while (i<m);
    return rez;
}
int main(){
    int A[m][n]={{3,4,5,1},
                {1,2,3,4},
                {8,9,2,3}};
    int t=3;
    cout<<"Numri: "<<NumeroVlertM(A,t)<<endl;
    return 0;
}