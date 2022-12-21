#include<iostream>
using namespace std;
int llogaritja(int a, int b, int c){
    int min=a;
    if(b<min) min=b;
    if(c<min) min=c;
    return min;
}
int llogaritja(int a, int b, float c){
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}
double llogaritja(int a,double b, int c){
    double mes=(a+b+c)/3;
    return mes;
}
int main(){
    int a=4,b=-2, c=3;
    cout<<"Min: "<<llogaritja(a,b,c)<<endl
        <<"Max: "<<llogaritja(a,b,(float)c)<<endl
        <<"Mes: "<<llogaritja(a,b*1.0,c)<<endl;
}