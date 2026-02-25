/* Funcao: [ler duas matrizes informadas pelo usuario e permitir  realizar operacoes como verificar igualdade, alterar elementos, 
multiplicar por numero inteiro, calcular transposta, verificar  se e invertivel (2x2), somar e subtrair matrizes, utilizando 
menu interativo ate o usuario escolher finalizar o programa]
*************************************************************** */

#include <iostream>
using namespace std;

// Função para exibir uma matriz
void exibirMatriz(int matriz[10][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Função para ler uma matriz
void lerMatriz(int matriz[10][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Digite o elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Função para verificar se duas matrizes são iguais
bool saoIguais(int matriz1[10][10], int matriz2[10][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

// Função para alterar um elemento de uma matriz
void alterarElemento(int matriz[10][10], int linhas, int colunas) {
    int linha, coluna, valor;
    cout << "Digite o índice da linha (1 a " << linhas << "): ";
    cin >> linha;
    cout << "Digite o índice da coluna (1 a " << colunas << "): ";
    cin >> coluna;
    cout << "Digite o novo valor: ";
    cin >> valor;
    matriz[linha - 1][coluna - 1] = valor;
}

// Função para multiplicar uma matriz por um número
void multiplicarPorInteiro(int matriz[10][10], int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] *= valor;
        }
    }
}

// Função para calcular a transposta de uma matriz
void transposta(int matriz[10][10], int linhas, int colunas) {
    int transposta[10][10];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    cout << "Matriz transposta:\n";
    exibirMatriz(transposta, colunas, linhas);
}

// Função para verificar se uma matriz é invertível (matriz quadrada e determinante != 0)
bool ehInversivel(int matriz[10][10], int tamanho) {
    if (tamanho != 2) {
        cout << "Somente matrizes 2x2 podem ser verificadas com esse método.\n";
        return false;
    }
    int det = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    if (det == 0) {
        cout << "A matriz não é invertível (determinante é 0)!\n";
        return false;
    }
    return true;
}

// Função para somar duas matrizes
void somaMatrizes(int matriz1[10][10], int matriz2[10][10], int linhas, int colunas) {
    int resultado[10][10];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << "Resultado da soma:\n";
    exibirMatriz(resultado, linhas, colunas);
}

// Função para subtrair duas matrizes
void subtrairMatrizes(int matriz1[10][10], int matriz2[10][10], int linhas, int colunas) {
    int resultado[10][10];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
    cout << "Resultado da subtração:\n";
    exibirMatriz(resultado, linhas, colunas);
}

int main() {
    int matriz1[10][10], matriz2[10][10];
    int opcao;
    int linhas1, colunas1, linhas2, colunas2, numero;

    while (true) {
        cout << "\nMenu de operações com Matrizes:\n";
        cout << "1. Entrada da primeira matriz\n";
        cout << "2. Entrada da segunda matriz\n";
        cout << "3. Verificar se as matrizes são iguais\n";
        cout << "4. Alterar elemento de uma matriz\n";
        cout << "5. Multiplicar matriz por inteiro\n";
        cout << "6. Transposta de uma matriz\n";
        cout << "7. Verificar se a matriz é inversível\n";
        cout << "8. Soma de duas matrizes\n";
        cout << "9. Subtração de duas matrizes\n";
        cout << "11. Finalizar o programa\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o número de linhas e colunas da primeira matriz: ";
                cin >> linhas1 >> colunas1;
                lerMatriz(matriz1, linhas1, colunas1);
                break;

            case 2:
                cout << "Digite o número de linhas e colunas da segunda matriz: ";
                cin >> linhas2 >> colunas2;
                lerMatriz(matriz2, linhas2, colunas2);
                break;

            case 3:
                if (saoIguais(matriz1, matriz2, linhas1, colunas1)) {
                    cout << "As matrizes são iguais.\n";
                } else {
                    cout << "As matrizes são diferentes.\n";
                }
                break;

            case 4:
                cout << "Alterando elemento da primeira matriz:\n";
                alterarElemento(matriz1, linhas1, colunas1);
                break;

            case 5:
                cout << "Transposta da primeira matriz:\n";
                transposta(matriz1, linhas1, colunas1);
                break;

            case 6:
                if (ehInversivel(matriz1, linhas1)) {
                    cout << "A matriz é invertível.\n";
                }
                break;

            case 7:
                if (linhas1 == linhas2 && colunas1 == colunas2) {
                    somaMatrizes(matriz1, matriz2, linhas1, colunas1);
                } else {
                    cout << "As matrizes não podem ser somadas (dimensões incompatíveis).\n";
                }
                break;

            case 8:
                if (linhas1 == linhas2 && colunas1 == colunas2) {
                    subtrairMatrizes(matriz1, matriz2, linhas1, colunas1);
                } else {
                    cout << "As matrizes não podem ser subtraídas (dimensões incompatíveis).\n";
                }
                break;

            

            case 9:
                cout << "Finalizando o programa.\n";
                return 0;

            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
