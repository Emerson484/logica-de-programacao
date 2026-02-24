// 1  Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

#include <iostream>
using namespace std;

int main(){
  int nota;
  
  cout<<"digite uma nota entre 0 e 10";
  cin>>nota;
  
  while(nota>10 || nota <0){
      cout<<"valor invalido!digite novamente";
      cin>>nota;
      
  }
  if(nota>=0|| nota<=10){
      cout<<"parabens vc informou um valor valido";
  }
    
