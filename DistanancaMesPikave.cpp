#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double x1,x2,y1,y2;
    double d;
    cout<<"Shkruaj koordinatat per piken A(x1,y1): ";
    cin>>x1>>y1;
    cout<<"Shkruaj koordinatat per piken B(x2,y2):";
    cin>>x2>>y2;
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"Distanca ne mes te pikave A dhe B eshte: "
        <<setprecision(3)
        <<d
        <<endl;
    return 0;
}