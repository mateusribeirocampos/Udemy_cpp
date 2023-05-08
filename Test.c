#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorReal, valorModulo10, valorModulo100, valorDivisao10, valorModulor10_10;

    printf("Digite o valor desejado: ");
    scanf("%d", &valorReal);

    valorModulo10 = valorReal % 10;
    valorDivisao10 = valorReal / 10;
    //valorModulo100 = valorReal % 100;
    //valorModulor10_10 = (valorDivisao10 % 10) / 10;

    if (valorDivisao10 == 1)
    {
        printf("Uma nota de %d reais", valorDivisao10 * 10);
    }

    printf("\nO valor de a = %d", valorModulo10);
    printf("\nO valor de a = %d", valorDivisao10);
    //printf("\nO valor de a = %d", valorModulo100);
    //printf("\nO valor de a = %d", valorModulor10_10);

    return 0;
}