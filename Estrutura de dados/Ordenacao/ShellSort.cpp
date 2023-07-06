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

void shellSort(int vetor[TAM])
{
    int i, j, atual;
    int h = 1;

    //De quantos em quantos será o pulo entre analizes
    while(h < TAM){
        h = 3*h + 1;
    }
    //reduz a distância entre as análises
    while(h > 1){
        h = h / 3;

          for (i = h; i < TAM; i++)
    {
        // Elemento autal em análise
        atual = vetor[i];
        // Elemento anterior ao analizado
        j = i - h;

        while ((j >= 0) && (atual < vetor[j]))
        {

            // posiciona os elementos uma posição para frente
            vetor[j + h] = vetor[j];

            // Faz o j andar para trás
            j = j - h;
        }

        // Agora que o espaço foi aberto, colocamos o atual (menor número) na posição correta
        vetor[j + h] = atual;

        // Mostra a lista atualizada
        imprimirVetor(vetor);
    }

    }

}

int main()
{
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    shellSort(vetor);

    imprimirVetor(vetor);

    return 0;
}