/* Escreva um programa em C++ que leia do teclado um valor inteiro e armazene este valor em uma
variável. Este valor deverá ser passado como argumento para uma função denominada
quadrado. Esta função imprime na tela o quadrado do valor passado como argumento.**/

#include <iostream>
using namespace std;

 int quadrado(int valor){
    return valor*valor;
}

int main(){
    int valor;
    cout<<"digite um valor inteiro";
    cin>>valor;
    
    cout<<quadrado(valor);

    return 0;
}
  
