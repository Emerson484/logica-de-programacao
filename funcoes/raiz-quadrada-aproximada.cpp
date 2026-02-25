/*Implementar a função raizquadrada. Esta função deve:
(a) Receber um número do tipo float como parâmetro.
(b) Retornar a raiz quadrada do número recebido de tal maneira que esta raiz, quando elevada
ao quadrado, apresente um erro máximo de 0.01% em relação ao valor do parâmetro.*/

#include <iostream>
using namespace std;

/*com for:

float raizquadrada(float numero){
    for(float i=1; i<=numero;i=i+0.001){
       if(i*i>numero){
           return i;
       }
    }
    
}*/
float raizquadrada(float numero){
    float i=0;float incremento =0.0001;
    
    while(i*i<numero){
        i+=incremento;
    }
    while((i*i)-numero>(0.01/100)*numero){
        i=i-0.000001;
    }
    return i;
}

int main()
{   float numero;
     
    cout<<"digite um numero";
    cin>>numero;
    
    cout<< raizquadrada(numero);
    
    
    

    return 0;
}
