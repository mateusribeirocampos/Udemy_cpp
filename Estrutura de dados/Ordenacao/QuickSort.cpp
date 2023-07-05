#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
using namespace std;

void imprimirVetor(int vetor[TAM])
{
    cout << "\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
}

void quickSort(int vetor[TAM], int inicio, int fim)
{
    int pivo, esquerda, direita, meio;
    // limites da esquerda e direita da região analizada
    esquerda = inicio;
    direita = fim;
    // ajustando auxiliares do centro
    meio = (int)((esquerda + direita) / 2);
    pivo = vetor[meio];

    while (direita > esquerda)
    {

        while (vetor[esquerda] < pivo)
        {
            esquerda = esquerda + 1;
        }
        while (vetor[direita] > pivo)
        {
            direita = direita - 1;
        }
        if (esquerda <= direita)
        {
            // realiza uma troca
            int aux = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = aux;

            // faz os limites laterais caminhar para o centro
            esquerda = esquerda + 1;
            direita = direita - 1;
        }
        imprimirVetor(vetor);
    }
    // recursão para continuar ordenando
    if (inicio < direita)
    {
        quickSort(vetor, inicio, direita);
    }
    if (esquerda < fim)
    {
        quickSort(vetor, esquerda, fim);
    }
}

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    quickSort(vetor, 0, TAM);
    imprimirVetor(vetor);

    return 0;
}