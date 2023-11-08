#include <iostream>
using namespace std;

int main() {
    int linha, coluna;

    // Solicita ao usuário o número de linhas e colunas da matriz
    cout << "Digite o número de linhas: ";
    cin >> linha;
    cout << "Digite o número de colunas: ";
    cin >> coluna;

    // Aloca dinamicamente um array de ponteiros para int, que representará as linhas da matriz
    int **matriz = new int*[linha];

    // Aloca dinamicamente os arrays de int (colunas) para cada linha
    for (int i = 0; i < linha; i++) {
        matriz[i] = new int[coluna];
    }

    // Preenche a matriz e a imprime
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matriz[i][j] = i; // Preenche a matriz com o valor 'i'
            cout << "  " << matriz[i][j]; // Imprime o valor da matriz
        }
        cout << endl;
    }

    // Libera a memória alocada para evitar vazamento de memória
    for (int i = 0; i < linha; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}