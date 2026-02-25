*/ Funcao: [calcula e imprime o resultado da multiplicação de dois números naturais não-nulos X e Y, sem utilizar a operação de multiplicação.]

*************************************************************** */
#include <iostream> // Inclui a biblioteca para entrada e saída
using namespace std; // Usa o espaço de nomes padrão

int main() {
  int x, y, resultado = 0; // Declara as variáveis, resultado inicializado como 0

  // Solicita os números x e y ao usuário
  cout << "Digite 2 números naturais não-nulos x e y" << endl;
  cin >> x >> y;

  // Valida se x e y são diferentes de zero
  while (x == 0 || y == 0) {
    cout << "Erro! Digite 2 números naturais não-nulos x e y" << endl;
    cin >> x >> y; // Solicita novamente os números se algum for 0
  }

  // Multiplica x por y usando somas sucessivas
  for (int i = 0; i < x; i++) {
    resultado += y; // Adiciona y ao resultado x vezes
  }

  // Imprime o resultado da multiplicação
  cout << "O resultado da multiplicação é: " << resultado << endl;

  return 0; // Finaliza o programa
}
