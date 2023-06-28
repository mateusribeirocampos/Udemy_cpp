#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;

#define TAM 10

void imprime_vetor(int vetor[TAM])
{
    cout << "\n";
    // Imprime o vetor
    for (int posicao = 0; posicao < TAM; posicao++)
    {
        cout << vetor[posicao] << " - ";
    }
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{
    // Caso não possa colocar mais valores
    if (*topo == TAM - 1)
    {
        cout << "Pilha cheia!";
    }
    else
    {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

int main()
{
    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // vetor pilha
    int topo = -1;                                   // topo da pilha - quando não tiver nenhum elemento na pilha topo - 1

    imprime_vetor(pilha);

    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 2, &topo);
    pilha_push(pilha, 6, &topo);
    pilha_push(pilha, 4, &topo);
    pilha_push(pilha, 9, &topo);
    pilha_push(pilha, 7, &topo);
    pilha_push(pilha, 2, &topo);
    pilha_push(pilha, 6, &topo);
    pilha_push(pilha, 4, &topo);
    pilha_push(pilha, 6, &topo);
    pilha_push(pilha, 4, &topo);

    imprime_vetor(pilha);

    return 0;
}