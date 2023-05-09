#include <stdio.h> // Inclusão da biblioteca para entrada e saída de dados
#include <stdlib.h> // Inclusão da biblioteca para alocação de memória dinâmica

int main()
{
    // Definindo variáveis
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas); // Leitura do número de linhas da matriz
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas); // Leitura do número de colunas da matriz

    // ponteiro apontando para outro ponteiro
    int **matriz;

    // Alocar memória para as linhas
    matriz = (int **)malloc(linhas * sizeof(int *));

    // Alocar memória para as colunas de cada linha
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Preenchendo valores e exibindo a matriz
    for (int i = 0; i < linhas; i++) // Loop para percorrer as linhas da matriz
    {
        for (int j = 0; j < colunas; j++) // Loop para percorrer as colunas da matriz
        {
            matriz[i][j] = i; // Atribuição de um valor (no caso, o número da linha) para cada posição da matriz
            printf("%d ", matriz[i][j]); // Impressão da matriz na tela
        }
        printf("\n"); // Pula uma linha após imprimir uma linha completa da matriz
    }

    // Liberar memória alocada
    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]); // Liberar a memória alocada para as colunas de cada linha
    }
    free(matriz); // Liberar a memória alocada para as linhas

    return 0; // Fim do programa
}
