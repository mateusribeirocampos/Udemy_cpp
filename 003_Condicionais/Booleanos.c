#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool a = true;
    bool b = false;

    if (a)
    {
        printf(" A eh verdadeiro\n");
    }

    // comparando o b
    if (b)
    {
        printf("B eh verdadeiro\n");
    }
    else
    {
        printf("B eh falso\n");
    }
    //comparando a falsidade
    if (!b)
    {
        printf("B eh falso\n");
    }

    return 0;
}