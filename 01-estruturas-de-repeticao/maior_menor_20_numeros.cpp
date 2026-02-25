//Funcao: [ler do teclado 20 numeros inteiros quaisquer e imprimir o maior e o menor entre eles ]

#include <iostream>
using namespace std;
int main(){

//declaracao das variaveis
  const int tamanho =20;
  int menor=10000;
  int maior=-1; 
  int numeros[tamanho];
  
//ler do teclado 20 numeros inteiros quaisquer
  for(int i=0;i<tamanho;i++){
     cout<<"digite o numero"<<i+1<<endl;
     cin>>numeros[i];
  }
  
//calcular o maior e menor numero 
  for(int i=0;i<tamanho;i++){
    if(numeros[i]>maior){
      maior=numeros[i];
    }
    if(numeros[i]<menor){
      menor=numeros[i];
    }
  }
//imprimir o maior e o menor valor
  cout<<"o maior numero e "<<maior<<endl;
  cout<<"o menor numero e "<<menor<<endl;

  return(0); 
}
