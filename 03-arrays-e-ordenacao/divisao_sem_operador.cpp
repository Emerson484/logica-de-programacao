/*Funcao: [calcula e imprime o resultado e o resto da divisão de dois números naturais não-nulos X e Y, sem utilizar a operação de divisão. O seu algoritmo deve
garantir também que X seja SEMPRE maior ou igual a Y.]
*************************************************************** */
#include <iostream> // Inclui a biblioteca para entrada e saída
using namespace std; // Usa o espaço de nomes padrão

int main() {
  int x, y, resto, resultado = 0; // Declara as variáveis

  // Solicita os números x e y ao usuário
  cout << "Digite 2 números naturais não-nulos x e y, onde x deve ser maior que y" << endl;
  cin >> x >> y;

  // Valida se x é maior que y e ambos são diferentes de 0
  while (y > x || x == 0 || y == 0) {
    cout << "Erro! x deve ser maior que y e ambos devem ser diferentes de 0! Digite novamente: " << endl;
    cin >> x >> y;
  }

  // Subtrai y de x até que x seja menor que y, contando as subtrações (resultado) e atualizando o resto
  while (x >= y) {
    x = x - y; // Subtrai y de x
    resto = x; // Armazena o valor atual de x como resto
    resultado++; // Conta o número de subtrações
  }

  // Imprime o resultado (quociente) e o resto da divisão
  cout << "O resultado da divisão de x por y é: " << resultado << endl;
  cout << "O resto da divisão de x por y é: " << resto << endl;

  return 0; // Finaliza o programa
}
