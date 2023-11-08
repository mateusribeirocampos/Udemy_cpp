#include <new>
#include <iostream>
using namespace std;

int main () {

    int A[2][3] = {1, 2, 2, 3, 2, 4};
    int B[3][2] = {4, 1, 1, 2, 2, 3};
    int R[2][2] = {0, 0, 0, 0};	
    int i; // linhas de A
    int j; // colunas de B
    int k; // colunas de A e linhas de B

    for (i = 0; i < 2; i++) // Loop para percorrer as linhas da matriz A
    {
        for (j = 0; j < 2; j++) // Loop para percorrer as colunas da matriz B
        {
            for (k = 0; k < 3; k++) // Loop para percorrer as colunas da matriz A e as linhas da matriz B
            {
                cout << "\nA[i][k] = " << A[i][k] << endl;
                cout << "\nB[k][j] = " << B[k][j] << endl;
                cout << "\nA[i][k] * B[k][j] = " << A[i][k] * B[k][j] << endl;
                cout << "\nR[i][j] + A[i][k] * B[k][j] = " << R[i][j] + A[i][k] * B[k][j] << endl;
                cout << "\nR[i][j] = " << R[i][j] << endl;
                R[i][j] += A[i][k] * B[k][j]; // Multiplicação das matrizes A e B
                cout << "\nR[i][j] = " << R[i][j] << endl;
            }
        }
    }

    cout << "\n";
    for (i = 0; i < 2; i++) // Loop para percorrer as linhas da matriz R
    {
        for (j = 0; j < 2; j++) // Loop para percorrer as colunas da matriz R
        {
            cout << "  " << R[i][j]; // Impressão da matriz R na tela
        }
        cout << endl; // Pula uma linha após imprimir uma linha completa da matriz R
    }

    return 0;
}