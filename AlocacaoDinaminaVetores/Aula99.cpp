/*Aula alocação dinamica vetores em C++*/

#include <stdio.h>
#include <stdlib.h>
#include <new>

int main() {
    // Definindo variáveis
    int tamanho, cont;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    //criando um ponteiro que recebe o novo vetor vazio
    int *vetor = new int(tamanho);

    // modificando e imprimindo os valores
    for(cont = 0; cont < tamanho; cont++) {
        vetor[cont] = cont;
        printf("\n%d", vetor[cont]);
    }

    return 0;
}