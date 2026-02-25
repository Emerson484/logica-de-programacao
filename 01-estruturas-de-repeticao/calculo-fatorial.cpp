/* Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120.*/
#include <iostream>

using namespace std;

int main()
{
   int fatorial=1,num;
   
   cout<<"digite um numero pra calcular o seu fatorial"<<endl;
   cin>>num;
   if(num<0){
       cout<<"erro fatorail negativo";
       
   }else if (num >12){
       cout<<"numero muito grande";
       
   }else 
   
   for(int i=1; i<=num; i++){
       
       fatorial*=i;
   }
   
   cout<<"o fatorial de "<<num<<" e:"<<fatorial<<endl;

    return 0;
}
