#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
using namespace std;

void imprimeVetor(int vetor[])
{
    cout << "\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
    cout << "\n";
}

void bubbleSort(int vetor[TAM])
{

    int x, y, aux;
        // valor da esquerda será analisado
        for (x = 0; x < TAM; x++)
    { // valor da direita será analisado
        for (y = x + 1; y < TAM; y++)
        {
            // confere se precisa fazer a troca
            if (vetor[x] > vetor[y])
            {
                imprimeVetor(vetor);
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }
}

int main()
{

    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubbleSort(vetor);

    imprimeVetor(vetor);

    return 0;
}