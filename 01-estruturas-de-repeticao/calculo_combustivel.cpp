/* Funcao: [ler o tipo de combustível desejado (Álcool ou Gasolina), o número de litros vendidos e calcula e imprime o valor a ser pago pelo cliente]
*************************************************************** */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

// declaracao de variaveis
  int combustivel;
  double litros,desconto,alcool,pagar;
 
// perguntar qual tipo de combustivel o cliente quer
  cout<<"qual tipo combustivel voce deseja? digite 1 para gasolina e 2 para alcool"<<endl;
  cin>>combustivel;
  
// pedir quantos litros de combustivel o clintes deseja
  cout<<"quantos litros de combustivel voce deseja"<<endl;
  cin>>litros;

//calcular desconto pra alcool
  if(litros<=15){
    desconto=litros*(4.0/100.0);
  }
  else if(litros>=20){
    desconto=litros*(6.0/100.0);
  }
  
// calcular desconto pra gasolina
  if(litros<=15){
    desconto=litros*(4.0/100.0);
  }
  
  else if(litros>=20){
    desconto=litros*(6/100);
  }
// calcular o valor a ser pago
  if(combustivel==2){
    pagar=(litros*4.8)*(1-desconto);
  
  }
  else if(combustivel==1){
    pagar=(litros*6.4)*(1-desconto);
  }
// imprime o valor a ser pago
  cout<<"o valor a ser pago sera"<<pagar;
  
  
return(0);
}
