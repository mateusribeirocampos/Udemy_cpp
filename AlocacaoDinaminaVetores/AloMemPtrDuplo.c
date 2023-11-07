#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que recebe o tamanho do vetor e retorna um ponteiro duplo
char **alocacao_Din_Vetor(int tamanho)
{
    // Aloca o ponteiro duplo com o tamanho do vetor
    char **aux = (char**)malloc(tamanho * sizeof(char*));
    return aux;
}

int main()
{
    int tamanho_vetor;
    char **nomesVetor;

    // Lê o tamanho do vetor do usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);
    getchar(); // Limpa o buffer do teclado

    // Chama a função para alocar o ponteiro duplo
    nomesVetor = alocacao_Din_Vetor(tamanho_vetor);

    // Loop para preencher o vetor de strings
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("\nDigite o nome para o vetor[%i] = ", i);
        char nome[30];
        fgets(nome, 30, stdin); // Lê a string digitada pelo usuário
        strtok(nome, "\n"); // Remove o \n do final da string lida

        // Aloca uma posição no vetor de ponteiros para armazenar a string
        nomesVetor[i] = (char*)malloc((strlen(nome)+1) * sizeof(char));
        strcpy(nomesVetor[i], nome); // Copia a string para o vetor alocado
    }

    // Loop para imprimir o vetor de strings
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("No nome no vetor = %s\n", nomesVetor[i]);
        free(nomesVetor[i]); // Libera a memória alocada para cada string
    }

    free(nomesVetor); // Libera a memória alocada para o vetor de ponteiros

    return 0;
}
