#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
/* A frente irá aumentar*/

using namespace std;

void imprime_vetor(int fila[TAM], int tamanho)
{
    cout << "\n";
    // imprime vetor
    for (int posicao = 0; posicao < TAM; posicao++)
    {
        cout << fila[posicao] << " - ";
    }
}

void fila_construtor(int *primeiro, int *ultimo)
{
    *primeiro = 0;
    *ultimo = -1;
}

bool fila_vazia(int primeiro, int ultimo)
{
    if (primeiro > ultimo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool fila_cheia(int ultimo)
{
    if (ultimo == TAM - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void fila_enfileirar(int fila[TAM], int valor, int *ultimo)
{

    if (fila_cheia(*ultimo))
    {
        cout << " Fila cheia! ";
    }
    else
    {
        *ultimo = *ultimo + 1;
        fila[*ultimo] = valor;
    }
}
void fila_desinfileirar(int fila[TAM], int *primeiro, int ultimo)
{

    if (fila_vazia(*primeiro, ultimo))
    {
        cout << "\nImpossivel desinfileirar uma lista vazia";
    }
    else
    {
        cout << "\nO valor " << fila[*primeiro] << " foi removido";
        fila[*primeiro] = 0;
        *primeiro = *primeiro + 1;
    }
}

int fila_tamanho(int ultimo, int primeiro)
{
    return (ultimo - primeiro) + 1;
}

int main()
{
    // vetor(frente, a, b, c, d, e, tras) FIFO = first in first out
    int primeiro, ultimo;
    int fila[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // int valorRetirado;

    fila_construtor(&primeiro, &ultimo);

    fila_enfileirar(fila, 5, &ultimo);
    fila_enfileirar(fila, 7, &ultimo);

    fila_desinfileirar(fila, &primeiro, ultimo);
    fila_desinfileirar(fila, &primeiro, ultimo);
    fila_desinfileirar(fila, &primeiro, ultimo);

    fila_enfileirar(fila, 4, &ultimo);

    imprime_vetor(fila, fila_tamanho(ultimo, primeiro));

    return 0;
}