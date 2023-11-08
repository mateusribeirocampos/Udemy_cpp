#include <iostream>
#include <new>
#include <iomanip>
using namespace std;

void mulitiplicaMatriz(int **matriz, int **matriz2, int **matriz3, int linhas, int colunas, int colunas1)
{
    // Verifica se o número de colunas da matriz A é igual ao número de linhas da matriz B
    if (linhas != colunas1)
    {
        cout << "Nao e possivel multiplicar as matrizes!" << endl;
        return;
    }

    int i, j, k;                 // linhas de A, colunas de B, colunas de A e linhas de B
    for (i = 0; i < linhas; i++) // Loop para percorrer as linhas da matriz A
    {
        for (j = 0; j < colunas1; j++) // Loop para percorrer as colunas1 da matriz B
        {
            for (k = 0; k < colunas; k++) // Loop para percorrer as colunas da matriz A e as linhas da matriz B
            {
                matriz3[i][j] += matriz[i][k] * matriz2[k][j]; // Multiplicação das matrizes A e B
            }
        }
    }
    cout << endl;
    for (i = 0; i < linhas; i++) // Loop para percorrer as linhas da matriz R
    {
        for (j = 0; j < colunas1; j++) // Loop para percorrer as colunas da matriz R
        {
            cout << "  " << matriz3[i][j]; // Impressão da matriz R na tela
        }
        cout << endl;
    }
}

int main()
{
    int linhas, colunas, linhas1, colunas1, i, j; // linhas de A, colunas de A, linhas de B, colunas de B, linhas de R, colunas de R

    cout << "Digite o numero de linhas da matriz A: ";
    cin >> linhas;
    cout << "Digite o numero de colunas da matriz A: ";
    cin >> colunas;

    int **matriz = new int *[linhas]; // aloca um vetor de ponteiros
    for (i = 0; i < linhas; i++)
    {                                 // aloca um vetor para cada posição do vetor de ponteiros
        matriz[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }

    cout << "Digite os elementos da matriz A: " << endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cout << "Digite o elemento da linha [" << i + 1 << "] e coluna [" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz A: " << endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cout << " " << matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nDigite o numero de linhas da matriz B: ";
    cin >> linhas1;
    cout << "Digite o numero de colunas da matriz B: ";
    cin >> colunas1;

    int **matriz2 = new int *[linhas1]; // aloca um vetor de ponteiros
    for (i = 0; i < linhas1; i++)
    {                                   // aloca um vetor para cada posição do vetor de ponteiros
        matriz2[i] = new int[colunas1]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }

    cout << "Digite os elementos da matriz B: " << endl;
    for (i = 0; i < linhas1; i++)
    {
        for (j = 0; j < colunas1; j++)
        {
            cout << "Digite o elemento da linha [" << i + 1 << "] e coluna [" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout << "Matriz B: " << endl;
    for (i = 0; i < linhas1; i++)
    {
        for (j = 0; j < colunas1; j++)
        {
            cout << " " << matriz2[i][j];
        }
        cout << endl;
    }

    int **matriz3 = new int *[linhas]; // aloca um vetor de ponteiros
    for (i = 0; i < linhas; i++)
    {                                   // aloca um vetor para cada posição do vetor de ponteiros
        matriz3[i] = new int[colunas1]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }

    mulitiplicaMatriz(matriz, matriz2, matriz3, linhas, colunas, colunas1);

    for (i = 0; i < linhas; i++)
    {
        delete[] matriz[i]; // libera cada vetor de inteiros do vetor de ponteiros
    }
    delete[] matriz; // libera o vetor de ponteiros

    for (i = 0; i < linhas1; i++)
    {
        delete[] matriz2[i]; // libera cada vetor de inteiros do vetor de ponteiros
    }
    delete[] matriz2; // libera o vetor de ponteiros

    return 0;
}