/* Funcao: [gerar 100 numeros aleatorios entre 1 e 1000 e ordenar estes numeros em ordem decrescente ultilizando o metodo bolha,imprimindo os numeros gerados antes
e depois da ordenacao]
*************************************************************** */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
 
//chamar a funcao srand para gerar numeros aleatorios a partir da hora do computador
  srand(time(NULL));
  
// declaracao de variaveis
  const int tamanho=10;
  int numeros[tamanho];
  int maior=-1;

// armazenar os valores em vetores usando a funcao rand
  for(int i=0;i<tamanho;i++){
    numeros[i]=rand() % 1001;
  }
  
//imprimir os valores gerados antes da ordenacao
  cout<<"os valores gerados antes da ordenacao sao"<<endl;
  for(int i=0;i<tamanho;i++){
    cout<<numeros[i]<<endl;
  }

//ordenar os numeros com metodo bolha
  for(int i=0;i<tamanho;i++){
    for(int j=tamanho;j>0;j--){
      if(numeros[j]>numeros[j-1]){
        maior=numeros[j];
        numeros[j]=numeros[j-1];
        numeros[j-1]=maior;
      }
    }
  }
  
//imprimir os valores depois da ordenacao
  cout<<"os valores em ordem decrescente apos serem ordenados sao"<<endl;
  for(int i=0;i<tamanho;i++){
    cout<<numeros[i]<<endl;
  }
  
return(0);
}
