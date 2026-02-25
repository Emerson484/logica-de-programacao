/* Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial
várias vezes e limitando o fatorial a números inteiros positivos e menores que 16.**/

#include <iostream>

using namespace std;

int main()
{
   int num;
   char resposta;
   
   while(true){
       int fatorial=1;
       
       
   cout<<"digite um numero pra calcular o seu fatorial"<<endl;
   cin>>num;
   
   if(num<0 || num>15){
       cout<<"erro fatorail negativo ou maior que 15"<<endl;
       
   }else {
   
   for(int i=1; i<=num; i++){
       
       fatorial*=i;
   }
   
   
   cout<<"o fatorial de "<<num<<" e:"<<fatorial<<endl;
       
   }
   
   cout<<"voce deseja calcular mais algum fatorial? digite 's' ou 'n' "<<endl;
   cin>>resposta;
   
   if(resposta != 's' && resposta !='S'){
       break;
       
   }
   }
   cout<<"programa encerrado";
   

    return 0;
}
