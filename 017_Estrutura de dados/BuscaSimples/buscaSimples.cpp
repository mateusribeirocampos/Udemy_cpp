#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM])
{
    // Imprime o vetor
    for (int posicao = 0; posicao < TAM; posicao++)
    {
        cout << vetor[posicao] << " - ";
    }
}

int busca_Binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada)
{
    bool valorFoiEncontrado;

    // Percorre a lista em busca do valor
    for (int posicao = 0; posicao < TAM; posicao++)
    {
        if (vetor[posicao] == valorProcurado)
        {
            valorFoiEncontrado = true;
            *posicaoEncontrada = posicao;
        }
    }

    if (valorFoiEncontrado)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
    int valorProcurado; // usuario vai buscar
    int posicaoEncontrada;

    imprime_vetor(vetor);

    printf("Qual numero deseja encontrar: ");
    scanf("%d", &valorProcurado);

    if (busca_Binaria(vetor, valorProcurado, &posicaoEncontrada) == 1)
    {
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada;
    }
    else
    {
        cout << "Valor nao encontrado";
    }

    return 0;
}