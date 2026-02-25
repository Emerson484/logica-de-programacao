/* Funcao: [ ler 6 notas e imprimir a média do aluno, de acordo com a estratégia adotada pelo professo,de fazer 6 provas em um semestre e descartar as DUAS menores 
notas dentre elas. ]
*************************************************************** */
#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    const int tamanho = 6;
    double nota[tamanho];
    double menor = 10000, soma = 0;

    // Ler as 6 notas do aluno
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> nota[i];
    }

    // Organizar os valores das notas usando o método da bolha
    for (int i = 0; i < tamanho; i++) {
        for (int j = tamanho - 1; j > i; j--) {
            if (nota[j] < nota[j - 1]) {
                menor = nota[j];
                nota[j] = nota[j - 1];
                nota[j - 1] = menor;
            }
        }
    }

    // Armazenar os 4 valores maiores na variável soma
    for (int i = 2; i < tamanho; i++) {
        soma += nota[i];
    }

    // Imprimir o valor da média do aluno
    cout << "A média é: " << soma / 4 << endl;

    return(0);
}
