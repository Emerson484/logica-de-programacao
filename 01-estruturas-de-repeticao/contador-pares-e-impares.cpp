/*Faça um programa que peça 10 números inteiros, calcule e mostre
a quantidade de números pares e a quantidade de números ímpares.*/
#include <iostream>

using namespace std;

int main()
{
    int num,par=0,impar=0;
    
    for(int i=1; i<=10; i++){
        
        cout<<"digite 10 numeros inteiros"<<endl;
        cin>>num;
        
        if( num % 2==0){
            par++;
            
        }else{
            impar++;
            
        }
        
    }
      cout<<"a quantidade de numeros impares e: "<<impar<<endl;
      cout<<"a quantidade de numeros mpares e: "<<par;
      
    return 0;
}
