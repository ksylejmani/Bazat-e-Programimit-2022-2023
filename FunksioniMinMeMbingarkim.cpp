#include<iostream>
using namespace std;
int min(int a, int b);
int min(int a, int b, int c);
int min(float a, int b, int c);
int min(int A[],int m);
int main(){
    int x=2,y=0,z=-10;
    const int m=7;
    int B[m]={4,6,2,-2,4,5,2};
    cout<<"Minimalja 1: "<<min(x,y)<<endl
        <<"Minimalja 2: "<<min(x,y,z)<<endl
        <<"Minimalja 3: "<<min(B,m)<<endl
        <<"Minimalja 4: "<<min((float)x,y,z)<<endl;
    return 0;
}
int min(int a, int b){
    int rez=(a<b)?(a):(b);
    return rez;
}
int min(int a, int b, int c){
    int rez=a;
    if(b<rez)
        rez=b;
    if(c<rez)
        rez=c;
    return rez;
}
int min(float a, int b, int c){
    int rez=-1; //int x=-1,y=-3,z=2;
    if(a>0)
        rez=a;
    else if(b>0)
        rez=b;
    else if(c>0)
        rez=c;
    if(a>0 && a<rez)
        rez=a;
    if(b>0 && b<rez)
        rez=b;
    if(c>0 && c<rez)
        rez=c;
    return rez;
}
int min(int A[],int m){
    int rez=A[0];
    for(int i=1;i<m;i++){
        if(A[i]<rez)
            rez=A[i];
    }
    return rez;
}