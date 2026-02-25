/*10a Um número a é dito permutação de um número b se os dígitos de a formam uma permutação  dos
dígitos de b.
1 
Exemplo: 5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455. Obs.: Considere
que o dígito 0 (zero) não aparece nos números. 
(a) Faça uma função contadigitos que dados um inteiro n e um inteiro d, 0 < d < 9, devolve  
quantas vezes o dígito d aparece em n. 
(b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e  
responda se a é permutação de b. 
*/
#include <iostream>
using namespace std;

int contadigitos(int n,int d){
    int cont=0;
    while(n>0){
        
        if(n%10==d){
        cont++;
        }
        n=n/10;
    }
    return cont;
}

int main()
{   int n,d,cont;
    std::cout<<"digite um inteiro n ";
    cin>>n;
    
    do{
    cout<<"digite um inteiro d em que 0>d<9 ";
    cin>>d;}
    while(d<0||d>9);
    
    cout<<contadigitos(n,d);
    
    

    return 0;
}
