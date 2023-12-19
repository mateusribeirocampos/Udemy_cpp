#include <stdio.h>

int DezVinteRestoWhile()
{
    int i = 10;
    while ((i < 20) && (i % 2 == 0))
    {
        printf("\nWHILE valores pares de 10 a 20: %i\n", i += 2);
    }
    return i;
}

int DezVinteRestoDoWhile()
{
    int j = 10;
    do
    {
        printf("\nDO WHILE valores pares de 10 a 20: %i\n", j += 2);

    } while ((j < 20) && (j % 2 == 0));
    return j;
}

int DezVinteRestoFor()
{
    int k = 10;
    for (int k = 10; k <= 20; k++)
    {
        if(k % 2 == 0)
        {
        printf("\nFOR valores pares de 10 a 20: %i\n", k);
        }
    }
    return k;
}

int main()
{
    DezVinteRestoWhile();
    printf("\n");
    printf("============");
    DezVinteRestoDoWhile();
    printf("\n");
    printf("============");
    DezVinteRestoFor();
    printf("\n");
    printf("============");
    getchar();
    return 0;
}