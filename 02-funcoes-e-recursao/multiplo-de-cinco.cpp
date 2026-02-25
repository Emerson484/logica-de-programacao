/* Escreva uma função que receba um valor inteiro como parâmetro e devolva 1, caso o valor
passado seja par e 0, caso contrário. Escreva um programa que receba do teclado um número
inteiro positivo e informe se o número é par. Seu programa deve usar a função.

Modifique a função anterior para que ela devolva true se o número recebido for múltiplo de 5
e false, caso contrário. Modifique o programa para usar adequadamente a função.*/

#include <iostream>
using namespace std;

int verificadora(int valor){
    if (valor %5 == 0){
    return true;
    
    }else 
    return false;              
    
}


int main(){
    
    int valor;
    cout<<"digite um inteiro positivo";
    cin>>valor;
    
    while(valor<0){
        cout<<"voce digitou um numero negativo,digite novamente";
        cin>>valor;
    }
    cout<<verificadora(valor);
    
   
    return 0;
}
   
