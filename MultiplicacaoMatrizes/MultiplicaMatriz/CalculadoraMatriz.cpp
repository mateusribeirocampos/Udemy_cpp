#include <iostream>
#include <new>
#include <iomanip>
using namespace std;

void DigitaMatriz(int **&matriz, int **&matriz2, int &linhas, int &colunas, int &linhas1, int &colunas1)
{
    int i, j;
    cout << "Digite o numero de linhas da matriz A: ";
    cin >> linhas;
    cout << "Digite o numero de colunas da matriz A: ";
    cin >> colunas;

    matriz = new int *[linhas];  // aloca um vetor de ponteiros
    for (i = 0; i < linhas; i++) // aloca um vetor para cada posição do vetor de ponteiros
    {
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

    matriz2 = new int *[linhas1]; // aloca um vetor de ponteiros
    for (i = 0; i < linhas1; i++) // aloca um vetor para cada posição do vetor de ponteiros
    {
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
}
void somaMatriz(int **matriz, int **matriz2, int **&matriz3, int linhas, int colunas, int linhas1, int colunas1)
{
    if (colunas == colunas1 && linhas == linhas1)
    {
        matriz3 = new int *[linhas]; // aloca um vetor de ponteiros
        for (int i = 0; i < linhas; i++)
        {
            matriz3[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        }

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                matriz3[i][j] = matriz[i][j] + matriz2[i][j]; // inicializa a matriz3 com 0
                cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << " + " << " Matriz2[" << i << "][" << j << "] = " << matriz2[i][j] << endl;
                cout << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << endl;
            }
        }

        cout << "A soma da Matriz A + Matriz B: " << endl; // Impressão da matriz3 na tela
        for (int i = 0; i < linhas; i++)                   // Loop para percorrer as linhas da matriz matriz3
        {
            for (int j = 0; j < colunas; j++) // Loop para percorrer as colunas da matriz matriz3
            {
                cout << "  " << matriz3[i][j]; // Impressão da matriz3 na tela
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Nao e possivel somar as matrizes!" << endl;
        cout << "Na soma de matriz so e possivel se o numero de linhas e colunas da matriz A for igual ao numero de linhas e colunas da matriz B!";
    }
}

void subratraiMatriz(int **matriz, int **matriz2, int **&matriz3, int linhas, int colunas, int linhas1, int colunas1)
{
    if (colunas == colunas1 && linhas == linhas1)
    {
        matriz3 = new int *[linhas]; // aloca um vetor de ponteiros
        for (int i = 0; i < linhas; i++)
        {
            matriz3[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        }

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                matriz3[i][j] = matriz[i][j] - matriz2[i][j]; // inicializa a matriz3 com 0
                cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << " + " << " Matriz2[" << i << "][" << j << "] = " << matriz2[i][j] << endl;
                cout << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << endl;
            }
        }

        cout << "A soma da Matriz A + Matriz B: " << endl; // Impressão da matriz3 na tela
        for (int i = 0; i < linhas; i++)                   // Loop para percorrer as linhas da matriz matriz3
        {
            for (int j = 0; j < colunas; j++) // Loop para percorrer as colunas da matriz matriz3
            {
                cout << "  " << matriz3[i][j]; // Impressão da matriz3 na tela
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Nao e possivel somar as matrizes!" << endl;
        cout << "Na soma de matriz so e possivel se o numero de linhas e colunas da matriz A for igual ao numero de linhas e colunas da matriz B!";
    }
}

void mulitiplicaMatriz(int **matriz, int **matriz2, int **&matriz3, int linhas, int colunas, int linhas1, int colunas1)
{
    int i, j, k; // variaveis auxiliares
    // Verifica se o número de colunas da matriz A é igual ao número de linhas da matriz B
    if (colunas == linhas1)
    {
        matriz3 = new int *[linhas]; // aloca um vetor de ponteiros
        for (i = 0; i < linhas; i++)
        {
            matriz3[i] = new int[colunas1]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        }

        for (i = 0; i < linhas; i++)
        {
            for (j = 0; j < colunas1; j++)
            {
                matriz3[i][j] = 0; // inicializa a matriz3 com 0
            }
        }

        for (i = 0; i < linhas; i++) // Loop para percorrer as linhas da matriz A
        {
            for (j = 0; j < colunas1; j++) // Loop para percorrer as colunas1 da matriz B
            {
                for (k = 0; k < colunas; k++) // Loop para percorrer as colunas da matriz A e as linhas da matriz B
                {
                    matriz3[i][j] += matriz[i][k] * matriz2[k][j]; // Multiplicação das matrizes A e B
                    cout << "Matriz[" << i << "][" << k << "] = " << matriz[i][k] << " * " << " Matriz2[" << k << "][" << j << "] = " << matriz2[k][j] << " = " << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << endl;
                    cout << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << endl << endl;
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
        cout << "Na multiliplicacao de matriz so e possivel se o numero de colunas da matriz A for igual ao numero de linhas da matriz B!";
        return;
    }
}

void inversaMatriz()
{
}

void menuInicial()
{
    int opcoes = 0, linhas = 0, colunas = 0, linhas1 = 0, colunas1 = 0;
    int **matriz = nullptr;
    int **matriz2 = nullptr;
    int **matriz3 = nullptr;

    while (opcoes < 1 || opcoes > 6)
    {
        cout << "1 - Somar duas matrizes" << endl;
        cout << "2 - Subtrair duas matrizes" << endl;
        cout << "3 - Multiplicar duas matrizes" << endl;
        cout << "4 - Inversa da Matriz" << endl;
        cout << "5 - Transposta da Matriz" << endl;
        cout << "6 - Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcoes;

        switch (opcoes)
        {
        case 1:
            cout << "Soma de matrizes" << endl;
            DigitaMatriz(matriz, matriz2, linhas, colunas, linhas1, colunas1);
            somaMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 2:
            cout << "Subtracao de matrizes" << endl;
            DigitaMatriz(matriz, matriz2, linhas, colunas, linhas1, colunas1);
            subratraiMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 3:
            cout << "Multiplicacao de matrizes" << endl;
            DigitaMatriz(matriz, matriz2, linhas, colunas, linhas1, colunas1);
            mulitiplicaMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 4:
            cout << "Inversa da matriz" << endl;
            break;
        case 5:
            cout << "Transposta da matriz" << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
    }
}

void limpaMemoria(int **matriz, int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        delete[] matriz[i]; // libera cada vetor de inteiros do vetor de ponteiros
    }
    delete[] matriz; // libera o vetor de ponteiros
    matriz = NULL;
    linhas = 0;
}

int main()
{
    int linhas = 0;
    int **matriz = nullptr;
    int **matriz2 = nullptr;
    int **matriz3 = nullptr;

    menuInicial();

    limpaMemoria(matriz, linhas);
    limpaMemoria(matriz2, linhas);
    limpaMemoria(matriz3, linhas);
    return 0;
}