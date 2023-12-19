#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int DezVinteWhile()
{
    int a = 10;
    while (a <= TAM)
    {
        printf("While par de 10 a 20: %i \n", a);
        a = a + 2;
    }
    return a;
}

int DezVinteDoWhile()
{
    int i = 10;
    do
    {
        printf("Do While par de 10 a 20: %i \n", i);
        i = i + 2;
    } while (i <= TAM);
    return i;
}

int DezVinteFor()
{
    for (int j = 10; j <= TAM; j += 2) // ou for (int j = 10; j <= TAM; j = j + 2);
    {
        printf("For par de 10 a 20: %i\n", j);
    }
}

int main()
{
    printf("\n");
    DezVinteWhile();
    printf("\n");
    DezVinteDoWhile();
    printf("\n");
    DezVinteFor();
    printf("\n");
    getchar();
    return 0;
}