/*Escreva um programa em C++ que leia do teclado um valor inteiro e armazene este valor em uma
variável. Este valor deverá ser passado como argumento para uma função denominada
quadrado. Esta função imprime na tela o quadrado do valor passado como argumento.

O mesmo exercício anterior, mas agora a função deverá retornar para uma segunda variável do
programa principal o quadrado do valor passado como argumento. Imprimir o valor calculado
(estando no programa principal).*/

#include <iostream>
using namespace std;

 int quadrado(int valor){
    return valor*valor;
}

int main(){
    int valor;int valor2;
    cout<<"digite um valor inteiro";
    cin>>valor;
    
    valor2=quadrado(valor);
    cout<<valor2;

    return 0;
}
   
