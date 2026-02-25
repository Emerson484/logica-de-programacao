/*Faça uma função MAX que recebe como entrada um inteiro n, uma matriz inteira Am×n e devolve três
inteiros: k, Lin e Col. O inteiro k é o maior elemento de A e é igual a A[Lin,Col].
Por exemplo, se A=[37 11285 3 4] então k=8; Lin=1;Col=2 .
Obs.: Se o elemento máximo ocorrer mais de uma vez, indique em Lin e Col qualquer uma das possíveis
posições.*/
#include <iostream>
using namespace std;


void MAX(int n, int Am[][100], int &k, int &Lin, int &Col) {
    k = Am[0][0]; 
    Lin = 0;
    Col = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (Am[i][j] > k) {
                k = Am[i][j]; 
                Lin = i;      
                Col = j;      
            }
        }
    }
}

int main() {
    int n;
    cout << "Digite o tamanho da matriz (n x n): ";
    cin >> n;

    int Am[100][100]; 

    
    cout << "Digite os elementos da matriz Am:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Am[i][j];
        }
    }

    int k, Lin, Col;
    MAX(n, Am, k, Lin, Col);

    cout << "O maior elemento da matriz Am é " << k << " e está na posição (" << Lin << ", " << Col << ")." << endl;

    return 0;
}
