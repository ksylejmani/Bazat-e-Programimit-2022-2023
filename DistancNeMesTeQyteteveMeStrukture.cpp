#include<iostream>
#include<string>
#include<math.h>
using namespace std;
struct Qyteti
{
    string emri;
    double x,y;
    short int nr_postal;
};
void shtyp_distancen(Qyteti q1, Qyteti q2);
int main(){
    Qyteti q1={"Prishtina",42.6675,21.1662,10000};
    Qyteti q2={"Prizreni",42.2171,20.7436,20000};
    shtyp_distancen(q1,q2);
    return 0;
}
void shtyp_distancen(Qyteti q1, Qyteti q2){
    double distanca=sqrt(pow(q2.x-q1.x,2)+pow(q2.y-q1.y,2));
    cout<<"Distanca ne mes te qytetit '"
        <<q1.emri
        <<"' dhe qytetit '"
        <<q2.emri
        <<"' eshte "
        <<distanca*100
        <<"km.\n";
}