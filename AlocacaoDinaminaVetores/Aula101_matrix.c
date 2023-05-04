/*Matrix será de ponteiro para ponteiro*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definindo variáveis
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    // ponteiro apontando para outro ponteiro
    int **matriz;

    // Alocar memória para as linhas
    matriz = (int **)malloc(linhas * sizeof(int *));

    // Alocar memória para as conlunas de cada linha
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Preechendo valores e exibindo a matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}