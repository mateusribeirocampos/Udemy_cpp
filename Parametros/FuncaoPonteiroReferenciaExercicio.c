#include <stdio.h>

void trocaValores(int *pA, int *pB)
{
    int temp;
    temp = *pB;
    *pB = *pA;
    *pA = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    trocaValores(&a, &b);

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
