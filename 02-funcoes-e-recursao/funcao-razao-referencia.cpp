/*Escreva uma função que retorna a razão entre dois números. A função deve retornar, pelo
comando return, o valor 1, se a operação foi possível; e o valor 0, se a operação não foi possível
(divisão por zero, por exemplo). O resultado da divisão deve ser retornado por um parâmetro
por referência.
#include <stdio.h>*/
#include <iostream>
using namespace std;

int razao(inta,intb,int&divisao){
    divisao=a/b;
    
    if(b==0){
       return 0;
    }
    if(b!=0){
    
        return 1;}
    }


int main()
{  int a,b,dividir;

   cout<<"digite o numerador e  denominador";
   cin>>a>>b;
   cout<<razao(a,b,dividir)<<endl;
   cout<<dividir<<endl;
    

    return 0;
}
