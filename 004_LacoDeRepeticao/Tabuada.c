#include <stdio.h>

int valores;

int DigitaValores()
{
    printf("\nQual tabuada deseja: ");
    scanf("%d", &valores);
}

int calculaTabuada()
{
    for(int i= 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, valores, valores * i);
    }
}

int main ()
{
    DigitaValores();
    calculaTabuada();
    getchar();
    return 0;
}