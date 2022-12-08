#include<iostream>
using namespace std;
int shuma(int a, int b, int c, int d, int e);
int main(){
    int n;
    int y;
    cout<<"Cakto n: ";
    cin>>n;
    y=2*shuma(2,n,4,2,1)+5+shuma(4,n+3,7,1,0);
    cout<<"y="<<y<<endl;

    return 0;
}
int shuma(int a, int b, int c, int d, int e){
    int rez=0;
    for(int i=a;i<=b;i++){
        if(i==c){
            continue;
        }
        else{
            rez=rez+(d*i+e);
        }   
    }
    return rez;
}