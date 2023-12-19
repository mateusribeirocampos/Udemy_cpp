#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alocacao_Din_Vetor(int tamanho)
{
    char *aux;
    aux = (char *)malloc(tamanho * sizeof(char));
    return aux;
}

int main()
{
    // Variávies: vetor para ler string e uma para o tamanho do vetor
    char *nomesVetor;
    int tamanho_vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    nomesVetor = alocacao_Din_Vetor(tamanho_vetor*30);

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("\nDigite os nomes das pessoas para cada vetor[%i] = ", i);
        fgets(nomesVetor+i*30, 30, stdin);
        strtok(nomesVetor+i*30, "\n");
    }

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("No nome no vetor = %s\n", nomesVetor+i*30);
    }

    free(nomesVetor);

    return 0;
}