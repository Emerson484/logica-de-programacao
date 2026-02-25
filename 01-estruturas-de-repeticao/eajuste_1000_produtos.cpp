/*Funcao: [calcula e imprime os novos precos de loja que esta reajustando os precos dos seus 1000 produtos ]
*************************************************************** */
#include <iostream> // Inclui a biblioteca para entrada e saída
using namespace std; // Usa o espaço de nomes padrão

int main() {

  // Declaração de variáveis
  const int num_de_produtos = 1000; // Define o número de produtos como 1000
  double preco_de_venda[num_de_produtos]; // Cria um array para armazenar os preços dos 1000 produtos

  // Inicializa os preços da loja (preços de 100 a 1099)
  for (int i = 0; i < num_de_produtos; i++) {
    preco_de_venda[i] = 100 + i; // O preço de cada produto começa de 100 e aumenta de 1 em 1
  }

  // Aplica os reajustes de preço de acordo com a faixa de cada produto
  for (int i = 0; i < 1000; i++) {
    if (i >= 0 && i < 100) {
      // Produtos 1 a 100 recebem um reajuste de 5%
      preco_de_venda[i] = preco_de_venda[i] * 1.05;
    }
    else if (i >= 100 && i < 200) {
      // Produtos 101 a 200 recebem um reajuste de 10%
      preco_de_venda[i] = preco_de_venda[i] * 1.1;
    }
    else if (i >= 200 && i < 300) {
      // Produtos 201 a 300 recebem um reajuste de 15%
      preco_de_venda[i] = preco_de_venda[i] * 1.15;
    }
    else if (i >= 300 && i < 400) {
      // Produtos 301 a 400 recebem um reajuste de 20%
      preco_de_venda[i] = preco_de_venda[i] * 1.2;
    }
    else if (i >= 400 && i < 500) {
      // Produtos 401 a 500 recebem um reajuste de 25%
      preco_de_venda[i] = preco_de_venda[i] * 1.25;
    }
    else if (i >= 500 && i < 600) {
      // Produtos 501 a 600 recebem um reajuste de 30%
      preco_de_venda[i] = preco_de_venda[i] * 1.3;
    }
    else if (i >= 600 && i < 700) {
      // Produtos 601 a 700 recebem um reajuste de 35%
      preco_de_venda[i] = preco_de_venda[i] * 1.35;
    }
    else if (i >= 700 && i < 800) {
      // Produtos 701 a 800 recebem um reajuste de 40%
      preco_de_venda[i] = preco_de_venda[i] * 1.4;
    }
    else if (i >= 800 && i < 900) {
      // Produtos 801 a 900 recebem um reajuste de 50%
      preco_de_venda[i] = preco_de_venda[i] * 1.5;
    }
    else if (i >= 900 && i < 1000) {
      // Produtos 901 a 1000 recebem um reajuste de 55%
      preco_de_venda[i] = preco_de_venda[i] * 1.55;
    }
  }

  // Imprime os preços dos produtos após o reajuste
  for (int i = 0; i < 1000; i++) {
    cout << "O preço do produto " << i + 1 << " é: " << preco_de_venda[i] << endl;
  }

  return (0); // Finaliza o programa
}
