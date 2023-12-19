#include <stdio.h>
#include <stdlib.h>

// Alocação na memória para o usuário para determinar o tamanho do vetor

int *alocaVetor(int tamanho)
{

    // criar um ponteiro auxiliar
    int *aux;

    // Alocação dinâmica de memória usando o malloc (reserva um espaço na memória)
    aux = (int *)malloc(tamanho * sizeof(int));

    // retorna o ponteiro aponta para a primeira posição de memória do vetor alocado
    return aux;
}

int main()
{
    // variáveis criada
    // v[0] ponteiro armazenará o endereço de memória do primeiro elemento do vetor
    int *vetor, tamnaho;

    // Criação de um ponteiro vazio (vai armazenar o endereço)
    // [] [] [] [] [] *vetor(v[0] -> v[1] v[2] v[3]) [] [] [] [] []

    printf("Digite um tamnho para o vetor: ");
    scanf("%d", &tamnaho);

    // ponteiro recebe o endereço de memória que foi alocado para o vetor
    vetor = alocaVetor(tamnaho);

    for (int i = 0; i < tamnaho; i++)
    {
        printf("Digite os elementos do vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamnaho; i++)
    {
        printf("Vetor[%d] = %d\r\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}