#include <stdio.h>
#include <stdlib.h>

int i, Valor, aux = 0;

int DigitaNumero()
{
    printf("\nDigite o numero para verificar se ele eh primo: ");
    scanf("%i", &Valor);
}

int NumPrimosOuNao()
{
    for (i = 1; i <= Valor; i++)
    {
        // Coferindo quantas vezes houve divisibilidade
        if (Valor % i == 0)
        {
            aux++;
        }
        // Exibe o resta da divisão na tela
        printf("%d / %d tem o resto = %d \n", Valor, i, Valor % i);
    }
    if (aux == 2)
    {
        printf("O numero eh primo! Pois ele tem apenas %d divisores.\nEle eh divisivel por 1 e ele por mesmo %d \n", aux, Valor);
    }
    else
    {
        printf("O numero nao eh primo! Pois ele tem %d divisores\n", aux);
    }
}

int main()
{
    DigitaNumero();
    printf("\n");
    NumPrimosOuNao();
    printf("\n");
    getchar();
    return 0;
}