#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 3;
    printf("\nDigite um numero: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("\nVoce digitou a opcao 1");
    }
    else if (opcao == 2)
    {
        printf("\nVoce digitou a opcao 2");
    }
    else if (opcao == 3)
    {
        printf("\nVoce digitou a opcao 3");
    }
    else
    {
        printf("\nVoce digitou a opcao invalida");
    }

    return 0;
}
