/* Programa em C++ que lê o tamanho de um vetor, recebe seus elementos e substitui cada valor por 1 (se for par) ou -1 (se for ímpar). Ao final, exibe o vetor
modificado.*/

#include <iostream>
using namespace std;

void mediaa (float a,float b,float c,float &MA){
    MA=(a+b+c)/3;
}

void mediap (float a,float b,float c,float &MP){
    MP=(a*1+b*3+c*6)/10;
}

void mediah(float a,float b,float c,float &MH){
    MH=3/((1/a)+(1/b)+(1/c));
    
}

int main(){
float MA,MP,MH,a,b,c;

cout<<"escreva 3 valores a,b,c"<<endl;
cin>>a>>b>>c;

mediaa( a, b,c,MA);
mediap( a, b,c,MP);
mediah( a, b,c,MH);

cout<<"mediaa"<<MA<<endl;
cout<<"mediap"<<MP<<endl;
cout<<"mediah"<<MH<<endl;





    return 0;
}

