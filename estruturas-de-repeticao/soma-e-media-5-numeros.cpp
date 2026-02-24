/* 6 Faça um programa que leia 5 números e informe a soma e a média dos números.*/

#include <iostream>
using namespace std;

int main()
{
    double soma=0,numero;
    
    
    
    for(int i=1; i<=5; i++){
        
        cout<<"digite 5 numeros"<<endl;
        cin>>numero;
        
        soma+=numero;
    }
    double media=soma/5;
    
    cout<<"a soma e : "<<soma<<endl;
    
    cout<<"a media e : "<<media<<endl;

    return 0;
}
