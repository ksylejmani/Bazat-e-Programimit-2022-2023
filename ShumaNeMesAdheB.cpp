#include<iostream>
int shuma(int a, int b, int c){
    int s=0;
    for(int i=a;i<=c;i++){
        if(i==b){
            continue;
        }
        else{
            s+=i;
        }
    }
    return s;
}int main(){
    int a,b,c;
    std::cout<<"Cakto a, b dhe c: ";
    std::cin>>a>>b>>c;
    int s;
    s=shuma(a,b,c);
    std::cout<<"Shuma: "<<s<<std::endl;
    return 0;
}
