#include <iostream>
#include <new>
using namespace std;

// função para digitar o array
void digitaArray(int *&ptr, int tamanho)
{
    // condição para verificar se o ponteiro foi inicializado
    if (ptr == nullptr)
    {                                                      // se o ponteiro não foi inicializado
        cout << "O ponteiro nao foi inicializado" << endl; // imprime mensagem
        return;                                            // sai da função
    }
    // se o ponteiro foi inicializado
    for (int i = 0; i < tamanho; i++)
    {                                                               // percorre o array
        cout << "Digite o valor do array na posicao " << i << ": "; // pede para digitar o valor do array
        cin >> ptr[i];                                              // armazena o valor digitado no array
    }
}
// função para imprimir o array
void imprimeArray(int *ptr, int tamanho)
{         
        cout << "\nArray["; // imprime o valor do array na posição i
    for (int i = 0; i < tamanho; i++){ // percorre o array
        // Array[valor, valor, valor, ..., valor];
        cout << i << ", "; // imprime o valor do array na posição i
    }
    cout << "]" << endl;            // imprime o valor do array na posição i

    // recebe o ponteiro e o tamanho do array
    cout << "\nArray["; // imprime o valor do array na posição i
    for (int i = 0; i < tamanho; i++){ // percorre o array
        // Array[valor, valor, valor, ..., valor];
        cout << ptr[i] << ", "; // imprime o valor do array na posição i
    }
    cout << "]";            // imprime o valor do array na posição i
}

int main()
{
    cout << "Vamos trabalhar com referencias com ponteiro e array" << endl;
    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;
    int *ptr = new int[tamanho]; // cria um array de tamanho tamanho

    digitaArray(ptr, tamanho);
    imprimeArray(ptr, tamanho);

    delete[] ptr; // deleta o array

    return 0;
}