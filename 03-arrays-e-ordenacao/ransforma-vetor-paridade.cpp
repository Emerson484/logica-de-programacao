/* Programa em C++ que lê o tamanho de um vetor, recebe seus elementos e substitui cada valor por 1 (se for par) ou -1 (se for ímpar). Ao final, 
exibe o vetor modificado.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cout << "Qual será o tamanho do vetor? ";
    cin >> t;
    
    // Verificando se o tamanho do vetor é positivo
    if (t <= 0) {
        cout << "Tamanho inválido do vetor. Encerrando o programa." << endl;
        return 1;
    }
    
    int elemento[t];  // Vetor de tamanho t
    
    // Recebendo os elementos do vetor
    for (int i = 0; i < t; i++){
        cout << "Informe um elemento: ";
        cin >> elemento[i];
    }
    
    // Modificando o vetor conforme as regras especificadas
    for (int i = 0; i < t; i++) {
        if (elemento[i] % 2 == 0) {
            elemento[i] = 1;  // número par, substituir por +1
        } else {
            elemento[i] = -1;  // número ímpar, substituir por -1
        }
    }
    
    // Imprimindo o vetor modificado
    cout << "Vetor modificado:" << endl;
    cout << "[";
    for (int i = 0; i < t; i++) {
        cout << setw(2) << elemento[i]
        if (i < t - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0
}
