#include <new> // Inclusão da biblioteca para manipulação de memória dinâmica
#include <iostream> // Inclusão da biblioteca para entrada e saída de dados
#include <string> // Inclusão da biblioteca para manipulação de strings
using namespace std; // Uso do namespace std

int main () {

    int linhas, colunas;
    int **matriz; // Declaração de um ponteiro para ponteiro de int

    cout << "Digite o numero de linhas: ";
    cin >> linhas; // Leitura do número de linhas da matriz
    cout << "\nDigite o numero de colunas: ";
    cin >> colunas; // Leitura do número de colunas da matriz

    matriz = (int **) new int[linhas]; // Alocação dinâmica de memória para as linhas da matriz

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) new int[colunas]; // Alocação dinâmica de memória para as colunas da matriz
    }

    for (int i = 0; i < linhas; i++) // Loop para percorrer as linhas da matriz
    {
        for (int j = 0; j < colunas; j++) // Loop para percorrer as colunas da matriz
        {
            matriz[i][j] = i; // Atribuição de um valor (no caso, o número da linha) para cada posição da matriz
            cout << "  " << matriz[i][j]; // Impressão da matriz na tela
        }
        cout << endl; // Pula uma linha após imprimir uma linha completa da matriz
    }
    
    return 0; // Fim do programa
}
