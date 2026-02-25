/* Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa
anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de
crescimento de 1.5%. Faça um programa que calcule e escreva o número de anos necessários 
para que a população do país A ultrapasse ou
iguale a população do país B, mantidas as taxas de crescimento.*/

#include <iostream>
using namespace std;
int main()
{
   int popA=80000,popB=200000;
   int anos=0;
   
   while(popA<popB){
       
       popA*=1.03;
       popB*=1.015;
       anos++;
   }
   cout<<"anos necessários"<<anos;

    return 0;
}
//outra forma de resolver
#include <iostream>
using namespace std;
int main()
{
   double popA=80000,popB=200000;
   int anos=0,tolerancia=1;
   
   while(popA<popB-tolerancia){
       
       popA*=1.03;
       popB*=1.015;
       anos++;
   }
   cout<<"anos necessários"<<anos;

    return 0;
}


