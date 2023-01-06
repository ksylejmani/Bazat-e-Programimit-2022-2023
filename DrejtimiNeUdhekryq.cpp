#include<iostream>
#include<string>
using namespace std;
enum drejtimi{
    para,
    pas,
    majtas,
    djathtas
};
drejtimi cakto_drejtimin(int d1,int d2,int d3,int d4);
int main(){
    int d1=30,d2=25,d3=14,d4=2;
    string drejtimet[]={"para","pas","majtas","djathtas"};
    cout<<"Drejtimi i levizjes eshte: "
        <<drejtimet[cakto_drejtimin(d1,d2,d3,d4)]
        <<endl;

    return 0;
}
drejtimi cakto_drejtimin(int d1,int d2,int d3,int d4){
    drejtimi rez;
    int min=d1;
    rez=para;
    if(d2<min){
        min=d2;
        rez=pas;
    }
    if(d3<min){
        min=d3;
        rez=majtas;
    }
    if(d4<min){
        min=d4;
        rez=djathtas;
    }
    return rez;
}