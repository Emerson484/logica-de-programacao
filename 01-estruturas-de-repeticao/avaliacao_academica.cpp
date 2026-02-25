/*Funcao: [ calcule a média de 3 notas quaisquer de um aluno. Com base nessa informação e levando-se em conta o número de faltas, e possivelmente a nota da prova 
final, informa se este aluno foi "APROVADO" (Se a média for maior que 7, inclusive), "REPROVADO POR MÉDIA" (Se a média for menor que 2,5 exclusive), "REPROVADO POR
FALTA" (Número de faltas maior que 15, inclusive) "APTO PARA A PROVA FINAL" (Se a média for maior que 2,5 inclusive, e menor que 7 exclusive). Se o aluno fizer a 
prova final e de acordo com sua nota na prova final, ele estará "APROVADO NA PROVA FINAL" (Média final maior que 5, inclusive) e "REPROVADO NA FINAL ]
*************************************************************** */

#include <iostream>  // Biblioteca para entrada e saída de dados
using namespace std;

int main() {
    // Declaração das variáveis
    int notas1, notas2, notas3, media, final, faltas, media_final; 

    // Solicita ao usuário as notas e a quantidade de faltas
    cout << "Digite a nota 1: ";
    cin >> notas1;  // Lê a primeira nota

    cout << "Digite a nota 2: ";
    cin >> notas2;  // Lê a segunda nota

    cout << "Digite a nota 3: ";
    cin >> notas3;  // Lê a terceira nota

    cout << "Digite as faltas: ";
    cin >> faltas;  // Lê o número de faltas do aluno

    // Calcula a média das três notas
    media = (notas1 + notas2 + notas3) / 3;

    // Verifica a situação do aluno com base na média e nas faltas
    if (media >= 7) {  // Se a média for maior ou igual a 7
        if (faltas >= 15) {  // Se o número de faltas for maior ou igual a 15
            cout << "Reprovado por falta";  // O aluno é reprovado por falta
        } else {
            cout << "Aprovado";  // Caso contrário, o aluno é aprovado
        }
    } else {  // Se a média for menor que 7
        if (media < 2.5) {  // Se a média for menor que 2.5
            cout << "Reprovado por média";  // O aluno é reprovado por média
        } else {
            if (faltas >= 15) {  // Se o número de faltas for maior ou igual a 15
                cout << "Reprovado por falta";  // O aluno é reprovado por falta
            } else {
               
                // Exibe a situação do aluno
                cout << "Apto para final" << endl;

                // Solicita a nota final ao aluno
                cout << "Digite a nota final: ";
                cin >> final;  // Lê a nota da prova final

                // Calcula a média final do aluno considerando a nota da final
                media_final = (media * 0.3 + final * 0.7);  // Média ponderada (30% da média das 3 notas + 70% da nota final)

                // Verifica se o aluno foi aprovado na final
                if (media_final >= 5) {  // Se a média final for maior ou igual a 5
                    cout << "Aprovado na final";  // O aluno é aprovado na final
                } else {
                    cout << "Reprovado na final";  // Caso contrário, o aluno é reprovado na final
                }
            }
        }
    }

    return 0;  // Finaliza o programa
}
