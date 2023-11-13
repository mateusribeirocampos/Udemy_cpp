#include <iostream>
#include <new>
#include <iomanip>

void limpaTela(){
    system("clear");
    system("cls");
}
void DigitaMatriz(int **&matriz, int **&matriz2, int &linhas, int &colunas, int &linhas1, int &colunas1)
{
    int i, j;
    std::cout << "Digite o numero de linhas da matriz A: ";
    std::cin >> linhas;
    std::cout << "Digite o numero de colunas da matriz A: ";
    std::cin >> colunas;

    matriz = new int *[linhas];  // aloca um vetor de ponteiros
    for (i = 0; i < linhas; i++) // aloca um vetor para cada posição do vetor de ponteiros
    {
        matriz[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }

    std::cout << "Digite os elementos da matriz A: " << std::endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            std::cout << "Digite o elemento da linha [" << i + 1 << "] e coluna [" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "Matriz A: " << std::endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            std::cout << std::setw(4) << " " << matriz[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "\nDigite o numero de linhas da matriz B: ";
    std::cin >> linhas1;
    std::cout << "Digite o numero de colunas da matriz B: ";
    std::cin >> colunas1;

    matriz2 = new int *[linhas1]; // aloca um vetor de ponteiros
    for (i = 0; i < linhas1; i++) // aloca um vetor para cada posição do vetor de ponteiros
    {
        matriz2[i] = new int[colunas1]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }

    std::cout << "Digite os elementos da matriz B: " << std::endl;
    for (i = 0; i < linhas1; i++)
    {
        for (j = 0; j < colunas1; j++)
        {
            std::cout << "Digite o elemento da linha [" << i + 1 << "] e coluna [" << j + 1 << "]: ";
            std::cin >> matriz2[i][j];
        }
    }

    std::cout << "Matriz B: " << std::endl;
    for (i = 0; i < linhas1; i++)
    {
        for (j = 0; j < colunas1; j++)
        {
            std::cout << std::setw(4) << " " << matriz2[i][j];
        }
        std::cout << std::endl;
    }
}
void DigitaMatrizTransposta(int **&matriz, int &linhas, int &colunas)
{
    /* Para a matriz trasnposta deve pedir a linha e converter para coluna para trasnpor*/
    int i, j;
    std::cout << "Digite o numero de linhas da matriz T: ";
    std::cin >> linhas;
    std::cout << "Digite o numero de colunas da matriz T: ";
    std::cin >> colunas;

    matriz = new int *[linhas];  // aloca um vetor de ponteiros
    for (i = 0; i < linhas; i++) // aloca um vetor para cada posição do vetor de ponteiros
    {
        matriz[i] = new int[colunas]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }

    std::cout << "Digite os elementos da matriz T: " << std::endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            std::cout << "Digite o elemento da linha [" << i + 1 << "] e coluna [" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "Matriz T: " << std::endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            std::cout << std::setw(4) << " " << matriz[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Matriz T de ordem " << colunas << "x" << linhas << std::endl;
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
                std::cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << " + " << " Matriz2[" << i << "][" << j << "] = " << matriz2[i][j] << std::endl;
                std::cout << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << std::endl;
            }
        }

        std::cout << "A soma da Matriz A + Matriz B: " << std::endl; // Impressão da matriz3 na tela
        for (int i = 0; i < linhas; i++)                   // Loop para percorrer as linhas da matriz matriz3
        {
            for (int j = 0; j < colunas; j++) // Loop para percorrer as colunas da matriz matriz3
            {
                std::cout << std::setw(4) << "  " << matriz3[i][j]; // Impressão da matriz3 na tela
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Nao e possivel somar as matrizes!" << std::endl;
        std::cout << "Na soma de matriz so e possivel se o numero de linhas e colunas da matriz A for igual ao numero de linhas e colunas da matriz B!";
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
                std::cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << " + " << " Matriz2[" << i << "][" << j << "] = " << matriz2[i][j] << std::endl;
                std::cout << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << std::endl;
            }
        }

        std::cout << "A soma da Matriz A + Matriz B: " << std::endl; // Impressão da matriz3 na tela
        for (int i = 0; i < linhas; i++)                   // Loop para percorrer as linhas da matriz matriz3
        {
            for (int j = 0; j < colunas; j++) // Loop para percorrer as colunas da matriz matriz3
            {
                std::cout << std::setw(4) << "  " << matriz3[i][j]; // Impressão da matriz3 na tela
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Nao e possivel somar as matrizes!" << std::endl;
        std::cout << "Na soma de matriz so e possivel se o numero de linhas e colunas da matriz A for igual ao numero de linhas e colunas da matriz B!";
    }
}

void mulitiplicaMatriz(int **matriz, int **matriz2, int **&matriz3, int linhas, int colunas, int linhas1, int colunas1)
{
    limpaTela();
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
                    std::cout << "Matriz[" << i << "][" << k << "] = " << matriz[i][k] << " * " << " Matriz2[" << k << "][" << j << "] = " << matriz2[k][j] << " = " << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << std::endl;
                    std::cout << "Matriz3[" << i << "][" << j << "] = " << matriz3[i][j] << std::endl << std::endl;
                }
            }
        }
        std::cout << std::endl;
        std::cout << "Matriz A * Matriz B: " << std::endl; // Impressão da matriz3 na tela
        for (i = 0; i < linhas; i++)             // Loop para percorrer as linhas da matriz matriz3
        {
            for (j = 0; j < colunas1; j++) // Loop para percorrer as colunas da matriz matriz3
            {
                std::cout << std::setw(4) << "  " << matriz3[i][j]; // Impressão da matriz3 na tela
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Nao e possivel multiplicar as matrizes!" << std::endl;
        std::cout << "Na multiliplicacao de matriz so e possivel se o numero de colunas da matriz A for igual ao numero de linhas da matriz B!";
        return;
    }
}

void transpostaMatriz(int **matriz, int linhas, int colunas)
{
    int i, j; // variaveis auxiliares
    int linhaColunaTransposta, colunalinhaTransposta; // variaveis para transposta

    linhaColunaTransposta = colunas; // A linha da matriz transposta é igual a coluna da matriz original
    colunalinhaTransposta = linhas; // A coluna da matriz transposta é igual a linha da matriz original

    int **matrizTransposta = new int *[linhaColunaTransposta]; // aloca um vetor de ponteiros para matriz transposta
    for(i = 0; i < linhaColunaTransposta; i++){ // aloca um vetor para cada posição do vetor de ponteiros
        matrizTransposta[i] = new int[colunalinhaTransposta]; // aloca um vetor de inteiros para cada posição do vetor de ponteiros
    }
    
    std::cout << std::endl;
    std::cout << "A transposta da Matriz T: " << std::endl; // Impressão da matriz na tela
    for(i = 0; i < linhaColunaTransposta; i++){
        for(j = 0; j < colunalinhaTransposta; j++){
            matrizTransposta[i][j] = matriz[j][i]; // matrizTransposta inverte a linha e coluna da matriz original
            std::cout << std::setw(4) << "  " << matrizTransposta[i][j]; // Impressão da matriz na tela
        }
        std::cout << std::endl;
    }
    std::cout << "Transposta da Matriz T de ordem " << colunalinhaTransposta << "x" << linhaColunaTransposta << std::endl;

    for(i = 0; i < linhaColunaTransposta; i++){ // libera cada vetor de inteiros do vetor de ponteiros
        delete[] matrizTransposta[i];
    }
    delete[] matrizTransposta; // libera o vetor de ponteiros


}

void determinanteMatriz()
{
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

    while (opcoes < 1 || opcoes > 7)
    {
        std::cout << "Calculadora de Matrizes" << std::endl;
        std::cout << "1 - Somar duas matrizes" << std::endl;
        std::cout << "2 - Subtrair duas matrizes" << std::endl;
        std::cout << "3 - Multiplicar duas matrizes" << std::endl;
        std::cout << "4 - Transposta da Matriz" << std::endl;
        std::cout << "5 - Determinante da Matriz" << std::endl;
        std::cout << "6 - Inversa da Matriz" << std::endl;
        std::cout << "7 - Sair" << std::endl;
        std::cout << "Digite a opcao desejada: ";
        std::cin >> opcoes;

        limpaTela();

        switch (opcoes)
        {
        case 1:
            std::cout << "Soma de matrizes" << std::endl;
            std::cout << "A soma de matrizes segue a seguinte regra:" << std::endl;
            std::cout << "A Matriz A e a Matriz B devem apresentar a mesma ordem" << std::endl;
            DigitaMatriz(matriz, matriz2, linhas, colunas, linhas1, colunas1);
            somaMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 2:
            std::cout << "Subtracao de matrizes" << std::endl;
            std::cout << "A subtracao de matrizes segue a seguinte regra:" << std::endl;
            std::cout << "A Matriz A e a Matriz B devem apresentar a mesma ordem" << std::endl;
            DigitaMatriz(matriz, matriz2, linhas, colunas, linhas1, colunas1);
            subratraiMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 3:
            std::cout << "Multiplicacao de matrizes" << std::endl;
            std::cout << "A multiplicacao de matrizes segue a seguinte regra:" << std::endl;
            std::cout << "A Matriz A deve apresentar o numero de colunas igual ao numero de linhas da Matriz B" << std::endl;
            DigitaMatriz(matriz, matriz2, linhas, colunas, linhas1, colunas1);
            mulitiplicaMatriz(matriz, matriz2, matriz3, linhas, colunas, linhas1, colunas1);
            break;
        case 4:
            std::cout << "Transposta da matriz" << std::endl;
            DigitaMatrizTransposta(matriz, linhas, colunas);
            transpostaMatriz(matriz, linhas, colunas);
            break;
        case 5:
            std::cout << "Determinante da matriz" << std::endl;
            break;
        case 6:
            std::cout << "Inversa da matriz" << std::endl;
            break;
        default:
            std::cout << "Opcao invalida!" << std::endl;
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
    int linhas = 0, **matriz = nullptr, **matriz2 = nullptr, **matriz3 = nullptr;

    menuInicial();

    limpaMemoria(matriz, linhas);
    limpaMemoria(matriz2, linhas);
    limpaMemoria(matriz3, linhas);
    return 0;
}