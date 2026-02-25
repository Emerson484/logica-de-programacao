/* Escreva um programa que solicita 50 valores inteiros ao usuário, armazena esses valores em um arranjo
chamado vet1. Depois, copia o conteúdo desse arranjo para um segundo arranjo chamado vet2. O
programa deve imprimir os dois arranjos na tela.*/
#include <iostream>
using namespace std;

int main() {
     int tamanho = 3; 
    
    int vet1[tamanho];
    int vet2[tamanho];
    
    cout << "Digite " << tamanho << " valores inteiros:" << endl;
    
    for (int i = 0; i < tamanho; i++) {
        cin >> vet1[i];
    }
    
    
    for (int i = 0; i < tamanho; i++) {
        vet2[i] = vet1[i];
    }

    
    cout << "Os valores de vet1 sao:";
    for (int i = 0; i < tamanho; i++) {
        cout << " " << vet1[i];
    }
    cout << endl;

    
    cout << "Os valores de vet2 sao:";
    for (int i = 0; i < tamanho; i++) {
        cout << " " << vet2[i];
    }
    cout << endl;

    return 0;
}
