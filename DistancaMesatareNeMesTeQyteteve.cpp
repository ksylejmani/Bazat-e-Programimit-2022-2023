#include<iostream>
int main(){
    const int m=4;
    const int n=(m*m-m)/2;// n=m*(m-1)/2
    int d[m][m]={{0,75,40,85},
                {78,0,80,30},
                {42,75,0,90},
                {82,28,95,0}};
    double c[n];
    int k=-1;
    int i=0;
    do
    {
        int j=0;
        do
        {
            if(j>i){
                k++;
                c[k]=(d[i][j]+d[j][i])/2.0;
            }
            j++;
            std::cout<<"Prova"<<std::endl;
        } while (j<m);
        i++;
        std::cout<<"Test"<<std::endl;
    } while (i<m);
    std::cout<<"Rezultati: ";
    for(int i=0;i<n;i++){
        std::cout<<c[i]<<" ";
        std::cout<<"Debug"<<std::endl;
    }
    return 0;
}