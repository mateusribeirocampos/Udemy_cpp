#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;

#define TAM 10

void imprime_vetor(int vetor[TAM], int topo)
{
    cout << "\n";
    // Imprime o vetor
    for (int posicao = 0; posicao < TAM; posicao++)
    {
        cout << vetor[posicao] << " - ";
    }

    cout << "Topo: " << topo;
}

bool pilha_vazia(int topo)
{
    if (topo == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool pilha_cheia(int topo)
{
    if (topo == TAM - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int pilha_tamanho(int topo) {
    return topo + 1;
}

int pilha_get(int *topo){
    if(pilha_vazia(*topo)) {
        return 0;
        cout << "A pilha esta vazia!";
    }else{
        return topo [*topo];
    }
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{
    // Caso não possa colocar mais valores
    if (pilha_cheia(*topo))
    {
        cout << "Pilha cheia!";
    }
    else
    {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM], int *topo)
{
    if (pilha_vazia(*topo))
    {
        cout << " -> A pilha ja esta vazia";
    }
    else
    {
        cout << " -> Valor removido: " << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

void pilha_construtor(int pilha[TAM], int *topo)
{
    *topo = -1;
    // Imprime o vetor
    for (int posicao = 0; posicao < TAM; posicao++)
    {
        pilha[posicao] = 0;
    }
}

int main()
{
    int pilha[TAM]; // vetor pilha
    int topo = -1;  // topo da pilha - quando não tiver nenhum elemento na pilha topo - 1

    pilha_construtor(pilha, &topo);

    imprime_vetor(pilha, topo);

    pilha_push(pilha, 5, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 7, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 2, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 6, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 4, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 9, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 7, &topo);

    cout << " -> Ultimo valor da pilha: " << pilha_get(&topo);
    cout << ", pilha de tamanho: " << pilha_tamanho(topo);

    imprime_vetor(pilha, topo);
    pilha_push(pilha, 4, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 9, &topo);
    imprime_vetor(pilha, topo);
    pilha_push(pilha, 7, &topo);
    imprime_vetor(pilha, topo);

    pilha_pop(pilha, &topo);
    imprime_vetor(pilha, topo);

    return 0;
}