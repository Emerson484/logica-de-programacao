/* Faça um programa que peça para n pessoas a sua idade,
ao final o programa devera verificar se a média de idade da turma 
varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, 
adulta ou idosa, conforme a média calculada.
*/

#include <iostream>
using namespace std;

int main()
{
    int idade,n,soma=0;
    
    
    cout<<"quantas pessoas tem?"<<endl;
    cin>>n;
    
    
    
    for(int i=1; i<=n; i++){
        
         cout<<"digite sua idade";
         cin>>idade;
         
         soma+=idade;
         
    }
    double media=soma/n;
    
    if(media>=0 && media<=25){
        cout<<"a turma e jovem";
        
    }else if(media>26 && media<=60){
        cout<<"a turma e adulta";
        
    }else{
        cout<<"a turma e idosa";
    }
    
    
   
    
    return 0;
}
