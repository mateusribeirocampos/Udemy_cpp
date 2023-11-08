#include <iostream>
#include <new>
using namespace std;

int main()
{
    int linhas, colunas, i, j; // linhas de A, colunas de A

    cout << "Digite o numero de linhas da matriz A: "; // linhas de A
    cin >> linhas; // linhas de A
    cout << "Digite o numero de colunas da matriz A: "; // colunas de A
    cin >> colunas; // colunas de A

    int **matriz = new int *[linhas]; // aloca um vetor de ponteiros
    cout << "matriz: " << matriz << endl; // matriz: 0x55b0b7b1c2a0

    for (i = 0; i < linhas; i++) // aloca um vetor para cada posição do vetor de ponteiros 
    {
        matriz[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        cout << "matriz: " << matriz[i] << endl; // matriz: 0x55b0b7b1c2a0
    }
    cout << endl;

    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cout << "Digite o elemento da linha [" << i + 1 << "] e coluna [" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cout << " " << matriz[i][j];
        }
        cout << endl;
    }

    for (i = 0; i < linhas; i++) // libera a memória das colunas
    {
        delete[] matriz[i]; // libera cada vetor de inteiros do vetor de ponteiros
    }
    delete[] matriz; // libera o vetor de ponteiros

    return 0;
}