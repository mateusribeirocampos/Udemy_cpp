#include <stdio.h>
#include <stdlib.h>
#define TAM 1

int RepWhile()
{
    int a = 10;
    while (a >= TAM)
    {
        printf("while: %d \n", a--);
    }
    return a;
}

int RepDoWhile()
{
    int b = 10;
    do
    {
        printf("doWhile: %d \n", b--);
    } while (b >= TAM); 
    return b;
}

int RepFor()
{
    int c = 10;
    for (c ; c >= TAM; c--)
        printf("For: %d \n", c);
    return c;
}

int main()
{
    RepWhile();
    RepDoWhile();
    RepFor();

    getchar();
    return 0;
}