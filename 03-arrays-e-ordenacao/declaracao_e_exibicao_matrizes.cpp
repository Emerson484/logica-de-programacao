// Escreva um programa que armazene de modo automático alguns valores em arranjosbidimensionais:
#include <iostream>
using namespace std;

int main() {
    // Arranjo A
    int arranjoA[3][10] = {
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    };

    
    cout << "Arranjo A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arranjoA[i][j] << " ";
        }
        cout << endl;
    }

    // Arranjo B
    int arranjoB[5][10] = {
        {0, 1, 4, 9, 16, 25, 36, 49, 64, 81},
        {1, 2, 5, 10, 17, 26, 37, 50, 65, 82},
        {2, 3, 6, 11, 18, 27, 38, 51, 66, 83},
        {3, 4, 7, 12, 19, 28, 39, 52, 67, 84},
        {4, 5, 8, 13, 20, 29, 40, 53, 68, 85}
    };

    
    cout << "Arranjo B:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arranjoB[i][j] << " ";
        }
        cout << endl;
    }

    // Arranjo C
    int arranjoC[4][6] = {
        {0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3, 3}
    };


    cout << "Arranjo C:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arranjoC[i][j] << " ";
        }
        cout << endl;
    }

    // Arranjo D
    int arranjoD[4][6] = {
        {-1, -1, -1, -1, -1, -1},
        {0, 0, 0, 0, 0, 0},
        {-1, -1, -1, -1, -1, -1},
        {0, 0, 0, 0, 0, 0}
    };

    cout << "Arranjo D:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arranjoD[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


