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

void selectionSort(int vetor[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        int menorValor = i; //Recebe a posição inicial para o menor valor
        for (int j = i + 1; j < TAM; j++)
        {
            if (vetor[j] < vetor[menorValor]) // Caso encontre um valor menor dos analizados
            {
                menorValor = j;
            }
        }
        //verifica se houve mudança e troca os valores
        int aux = vetor[i];
        vetor[i] = vetor[menorValor];
        vetor[menorValor] = aux;
        imprimirVetor(vetor);
    }
}

int main()
{

    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    selectionSort(vetor);
    imprimirVetor(vetor);

    return 0;
}