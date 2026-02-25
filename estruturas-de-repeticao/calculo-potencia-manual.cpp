/* Faça um programa que peça dois números, base e expoente, calcule
e mostre o primeiro número elevado ao segundo número.
Não utilize a função de potência da linguagem.*/
#include <iostream>

using namespace std;

int main()
{
    int base,expoente,resultado=1;
    
    cout<<"digite a base"<<endl;
    cin>>base;
    
    cout<<"digite o expoente"<<endl;
    cin>>expoente;
    
    if(expoente<10){
        cout<<"erro  voce digitou um expoente negativo";
        cin>>expoente;
    }
    for(int i=1; i<=expoente; i++){
        
        resultado*=base;
    }
    
    cout<<"o resultado e "<<resultado;
    
   
      
    return 0;
}
