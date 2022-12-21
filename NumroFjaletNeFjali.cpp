#include<iostream>
#include<string>
using namespace std;
int NumroFjalet(string teksti);
int main(){
    string s="Prishtina ne vitin e ri!";
    cout<<"Numri i fjaleve ne fjaline '"
        <<s
        <<"' eshte "
        <<NumroFjalet(s)
        <<".\n";
    return 0;
}
int NumroFjalet(string teksti){
    int rez=0;
    for(int i=0;i<teksti.size();i++){
        if(teksti.at(i)==' '){
            rez++;
        }
    }
    return rez+1;//++rez;
}