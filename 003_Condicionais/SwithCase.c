#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Escolha a opcao: ");
    scanf("%i", &a);

    switch (a)
    {
    case 1:
        printf("\nOpcao 1:");
        break;
    case 2:
        printf("\nOpcao 2:");
        break;
    case 3:
        printf("\nOpcao 3:");
        break;
    default:
        printf("\nOpcao invalida:");
        break;
    }
    return 0;
}
