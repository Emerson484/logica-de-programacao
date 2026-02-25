/*Funcao: [o programa calcula e imprime a média aritmética dos números inteiros múltiplos de 6, compreendidos entre 1 (inclusive) e 1.000 (inclusive). ]
*************************************************************** */
#include <iostream> // Inclui a biblioteca para entrada e saída
using namespace std;

int main() {
  double media, quantidade_de_multiplos = 0, soma = 0; // Declara as variáveis

  // Laço para verificar múltiplos de 6 entre 1 e 1000
  for(int i = 1; i <= 1000; i++) {
    if(i % 6 == 0) { // Se o número for múltiplo de 6
      soma += i; // Soma o número
      quantidade_de_multiplos++; // Conta o múltiplo
    }
  }

  // Calcula a média
  media = soma / quantidade_de_multiplos;

  // Imprime o resultado
  cout << "A média dos números inteiros múltiplos de 6 é: " << media;

  return 0; // Finaliza o programa
}
