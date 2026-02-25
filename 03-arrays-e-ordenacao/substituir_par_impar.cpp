/* Escreva um programa que recebe um vetor de inteiros positivos e substitui seus elementos de valor
ímpar por -1 e os pares por +1. Em seguida, imprime o vetor alterado.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cout << "Qual será o tamanho do vetor? ";
    cin >> t;

  if (t <= 0) {
     cout << "Tamanho inválido do vetor. Encerrando o programa.";
    return 1;
    }
    int elemento[t];
  
for (int i = 0; i < t; i++){
        cout << "Informe um elemento: ";
        cin >> elemento[i];
    }
    
for (int i = 0; i < t; i++) {
        if (elemento[i] % 2 == 0) {
            elemento[i] = 1; 
        } else {
            elemento[i] = -1;
        }
    }
    
cout << "Vetor modificado:";
cout << "[";
 for (int i = 0; i < t; i++) {
     
cout << setw(2) << elemento[i];

 if (i < t - 1) {
 cout << ", ";
        }
    }
cout << "]" << endl;

    return 0;
}

