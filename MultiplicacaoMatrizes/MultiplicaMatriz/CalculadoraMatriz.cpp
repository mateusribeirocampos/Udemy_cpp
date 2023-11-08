#include <iostream>
#include <new>
#include <iomanip>
using namespace std;

void DigitaMatriz()
{
    int linhas, colunas, linhas1, colunas1, i, j; // linhas de A, colunas de A, linhas de B, colunas de B, linhas de matriz3, colunas de matriz3

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
    {                                  // aloca um vetor para cada posição do vetor de ponteiros
        matriz3[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }
}

void somaMatriz()
{
}

void subratraiMatriz()
{
}

void mulitiplicaMatriz(int **matriz, int **matriz2, int **matriz3, int linhas, int colunas, int linhas1, int colunas1)
{
    int i, j, k; // variaveis auxiliares
    // Verifica se o número de colunas da matriz A é igual ao número de linhas da matriz B
    if (linhas == colunas1)
    {
        for (i = 0; i < linhas; i++) // Loop para percorrer as linhas da matriz A
        {
            for (j = 0; j < colunas1; j++) // Loop para percorrer as colunas1 da matriz B
            {
                for (k = 0; k < colunas; k++) // Loop para percorrer as colunas da matriz A e as linhas da matriz B
                {
                    matriz3[i][j] += matriz[i][k] * matriz2[k][j]; // Multiplicação das matrizes A e B
                    cout << "\nmatriz3[i][j] = " << matriz3[i][j] << endl;
                }
            }
        }
        cout << endl;
        cout << "Matriz A * Matriz B: " << endl; // Impressão da matriz3 na tela
        for (i = 0; i < linhas; i++)             // Loop para percorrer as linhas da matriz matriz3
        {
            for (j = 0; j < colunas1; j++) // Loop para percorrer as colunas da matriz matriz3
            {
                cout << "  " << matriz3[i][j]; // Impressão da matriz3 na tela
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Nao e possivel multiplicar as matrizes!" << endl;
        return;
    }
}

void divideMatriz()
{
}

void menuInicial()
{
    int opcoes = 0, linhas = 0, colunas = 0, linhas1 = 0, colunas1 = 0, i;
    int **matriz = new int *[linhas];
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = new int[colunas];
    }
    int **matriz2 = new int *[linhas1];
    for (i = 0; i < linhas; i++)
    {
        matriz2[i] = new int[colunas1];
    }
    int **matriz3 = new int *[linhas2];
    for (i = 0; i < linhas2; i++)
    {
        matriz3[i] = new int[colunas2];
    }

    while (opcoes < 1 || opcoes > 5)
    {
        cout << "1 - Somar duas matrizes" << endl;
        cout << "2 - Subtrair duas matrizes" << endl;
        cout << "3 - Multiplicar duas matrizes" << endl;
        cout << "4 - Dividir duas matrizes" << endl;
        cout << "5 - Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcoes;

        switch (opcoes)
        {
        case 1:
            cout << "Soma" << endl;
            break;
        case 2:
            cout << "Subtracao" << endl;
            break;
        case 3:
            cout << "Multiplicacao" << endl;
            DigitaMatriz();
            mulitiplicaMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 4:
            cout << "Divisao" << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
    }
}

void limpaMemoria(int **matriz, int linhas, int colunas)
{
    for (i = 0; i < linhas; i++)
    {
        delete[] matriz[i]; // libera cada vetor de inteiros do vetor de ponteiros
    }
    delete[] matriz; // libera o vetor de ponteiros
}

int main()
{
    int linhas, colunas;
    int **matriz = new int *[linhas];
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = new int[colunas];
    }

    menuInicial();

    limpaMemoria(matriz, linhas, colunas);
    return 0;
}