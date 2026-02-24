/* Faça um programa que receba dois números inteiros e gere os números
inteiros que estão no intervalo compreendido por eles.
Depois altere o programa anterior para mostrar no final a soma dos números.*/

#include <iostream>

using namespace std;
int main()
{
    int int1,int2,maior,menor,soma=0;
    
    cout<<"digite dois numeros inteiros"<<endl;
    cin>>int1;
    cin>>int2;
    
    if(int1<int2){
        menor=int1;
        maior=int2;
        
    }else{
        
        menor=int2;
        maior=int1;
    }
    
    
    
    for(int i=menor; i<=maior; i++){
        soma+=i;
        cout<<i<<" "<<endl;
        
    }
      cout<<"a soma e"<<soma<<endl;
    
    
    return 0;
}
