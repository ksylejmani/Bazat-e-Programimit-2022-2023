#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main (){
    int a, b, c;
    double d;
    long long int p;
    long long int v;
    long long int s;

    cout<<"Jepni vlerat e a , b, c " <<endl;
    cin>>a>>b>>c;

    d = sqrt(a*a + b*b);
    p = 2*a + 2*b;
    v = a*b*c;
    s = 2*(a*b + a*c + b*c);

    cout<<"Vlera e d eshte: "<<setprecision(3)
    <<setw(10)<<setfill('X')<<d<<"\u20AC"<<endl;
    cout<<"Vlera e p eshte: "<<p<<endl;
    cout<<"Vlera e v eshte: "<<v<<endl;
    cout<<"Vlera e s eshte: "<<s<<endl;

    return 0;

}