#include<iostream>
#include<math.h>
#include<string>
using namespace std;
enum kahu{
    djathtas,
    majtas
};
struct ngarkesa
{
    double v;
    double x,y;
};
double llogarit_forcen(ngarkesa q1, ngarkesa q2);
kahu llogarit_kahun(ngarkesa q1, ngarkesa q2);
int main(){
    string kahet[]={"djathtas","majtas"};
    ngarkesa q1={pow(3,-10),2.3,3.5}, q2={pow(7,-10),1.2,0.5};
    cout<<"Forca: "
        <<llogarit_forcen(q1,q2)
        <<endl;
    cout<<"Kahu: "
        <<kahet[llogarit_kahun(q1,q2)]
        <<endl;

    return 0;
}
double llogarit_forcen(ngarkesa q1, ngarkesa q2){
    double const pi=3.14;
    double const konstanta_dielektrike=pow(10,-9)/(36*pi);
    double r=sqrt(pow(q1.x-q2.x,2)+pow(q1.y-q2.y,2));
    double forca=q1.v*q2.v/(4*pi*r*r*konstanta_dielektrike);
    return forca;
}
kahu llogarit_kahun(ngarkesa q1, ngarkesa q2){
    kahu rez;
    if( (q1.v>0 && q2.v>0)||(q1.v<0 && q2.v<0)){
        rez=(q1.v>q2.v)?(djathtas):(majtas);
    }
    else{
        if(q1.v>0){
            rez=majtas;
        } 
        else{
            rez=djathtas;
        }      
    }
    return rez;
}