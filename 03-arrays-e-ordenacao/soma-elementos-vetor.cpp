/*Escreva um programa que recebe um vetor de inteiros, calcula a soma de todos os elementos do vetor e
imprime a soma calculada.*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int soma = 0, t;
    cout << "qual sera o tamanho do vetor ?";
    cin >> t;
    
    
    int elemento[t];
    
    for (int i = 0; i < t; i++){
        cout << "informe um elemento: ";
        cin>>elemento[i];
        soma += elemento[i];

    }
    
    cout<<"elemento"<<setw(4)<<soma<<endl;
    return 0;
}
