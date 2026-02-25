// pedir um valor e retornar a raiz quadrada desse numero
# include <iostream>
using namespace std;
int main(){
  int raiz;
  double resposta;
  
  cout<<"digite a raiz para ser calculada";
  cin>>raiz;
  
  for(double i=0;i*i<raiz;i=i+0.000001){
     resposta=i;
  }
  cout<<"a raiz e"<<resposta;
}
  
