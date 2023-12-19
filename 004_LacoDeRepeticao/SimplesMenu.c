#include <stdio.h>
#include <stdlib.h>

int opcao, i = 1;

void Menu()
{
    while (opcao < 1 || opcao > 3)
    {
        printf("%i\n", opcao);
        printf("==============================");
        printf("\n%i. Para imprimir o 1", i + 1);
        printf("\n%i. Para imprimir o 2", i + 2);
        printf("\n%i. Para imprimir o 3", i + 3);
        printf("\nA opcao escolhida foi: ");
        scanf("\n%i", &opcao);
    }
}

void ImprimirEscolhas()
{
    switch (opcao)
    {
    case 1:
        printf("\nVoce selecionou a opcao 1\n");
        break;
    case 2:
        printf("\nVoce selecionou a opcao 2\n");
        break;
    case 3:
        printf("\nVoce selecionou a opcao 3\n");
        break;
    default:
        printf("\nVoce nao selecionou nehuma opcao valida");
        break;
    }
}

int main()
{
    Menu();
    ImprimirEscolhas();
    system("pause");
    return 0;
}