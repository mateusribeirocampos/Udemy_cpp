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
    int esquerda = 0;      // limite da esquerda
    int direita = TAM - 1; // limite da direita
    int meio;              // o meio onde fica o cursor

    while (esquerda <= direita)
    {

        // Encontra o meio da análise
        meio = (esquerda + direita) / 2;

        // quando o valor do meio é encontrado
        if (valorProcurado == vetor[meio])
        {
            *posicaoEncontrada = meio;
            return 1;
        }

        // Ajustando os limites laterais
        if (vetor[meio] < valorProcurado)
        {
            esquerda = meio + 1;
        }
        else
        {
            direita = meio - 1;
        }
    }
    return -1;
}

int main()
{
    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
    int valorProcurado; // usuario vai buscar
    int posicaoEncontrada;

    // Imprime o vetor na tela
    imprime_vetor(vetor);

    // len do o número buscada
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