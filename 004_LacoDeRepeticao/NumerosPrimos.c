#include <stdio.h>
#include <stdlib.h>

int Valor, num_primo;

int DigitaNumero()
{
    printf("\nDigite o numero para verificar se ele eh primo: ");
    scanf("%i", &Valor);
}

int FornumeroPrimos()
{
    num_primo = 0;
    for (int i = 2; i <= Valor / 2; i++)
    {
        if (Valor % i == 0)
        {
            num_primo = 1;
        }
        printf("Numero que esta no num_primo: %i\n", num_primo);
    }
    if (num_primo == 0)
    {
        printf("Numero primo: %i\n", Valor);
    }
    else
    {
        printf("Numero nao primo!!\n");
    }
    return 0;
}

int main()
{
    DigitaNumero();
    if (Valor <= 1)
    {
        printf("Numero invalido!");
        return 1;
    }
    FornumeroPrimos();
    getchar();
    return 0;
}