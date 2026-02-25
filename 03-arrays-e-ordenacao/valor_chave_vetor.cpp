/* Escreva um programa que leia 21 valores inteiros, sendo que os primeiros 20 valores devem ser
armazenados no vetor V. Em seguida, o programa deve determinar se o 21o valor lido está no vetor, isto
é, se pelo menos um dos elementos do vetor é igual ao 21o valor lido. Se estiver, o programa deve
imprimir a posição (o índice) em que o valor foi encontrado. Se não estiver, deve imprimir a mensagem:
“O valor chave não foi encontrado”.*/
#include <iostream>
using namespace std;

int main() {
    int tamanho = 21; 
    int valores[tamanho]; 
    int vetorv[tamanho - 1]; 

    
    cout << "Digite 21 valores inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor inteiro " << i + 1 << ": ";
        cin >> valores[i];
    }

   
    for (int i = 0; i < tamanho - 1; i++) {
        vetorv[i] = valores[i];
    }

  
    int chave = valores[tamanho - 1];
    int posicao_encontrada = -1; 
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetorv[i] == chave) {
            posicao_encontrada = i; 
        }
    }

    if (posicao_encontrada != -1) {
        cout << "O valor chave " << chave << " foi encontrado na posição " << posicao_encontrada << " do vetorv." << endl;
    } else {
        cout << "O valor chave " << chave << " não foi encontrado no vetorv." << endl;
    }

    return 0;
}
