#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
using namespace std;

void imprimirVetor(int vetor[TAM]) {

    cout << "\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
}

void insertionSort(int vetor[TAM]){
    int i, j, atual;

    for(i = 1; i < TAM; i++) {
        //Elemento autal em análise
        atual = vetor[i];
        //Elemento anterior ao analizado
        j = i - 1;

        while((j >= 0) && (atual <  vetor[j])) {

            // posiciona os elementos uma posição para frente
            vetor[j + 1] = vetor[j];
            
            // Faz o j andar para trás
            j = j - 1;
        }

        //Agora que o espaço foi aberto, colocamos o atual (menor número) na posição correta
        vetor[j + 1] = atual;

        //Mostra a lista atualizada
        imprimirVetor(vetor);
    }

}

int main(){
    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    insertionSort(vetor);

    imprimirVetor(vetor);


    return 0;
}