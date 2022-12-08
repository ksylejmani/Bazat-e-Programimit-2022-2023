#include<iostream>
using namespace std;
int main(){
    float n=578;
    int sh1=(int)n/100;
    n=n/100;
    n=(n-sh1)*10;
    int sh2=(int)n;
    cout<<"Sh1:"<<sh1<<", sh2:"<<sh2<<endl;
    return 0;
}