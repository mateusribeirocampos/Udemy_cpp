#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    if (a > 5 && a < 15)
    {
        printf("\nA variavel 'a' esta entre 5 e 15\n");
    }
    else
    {
        printf("\nA variavel 'a' nao esta entre 5 e 15");
    }

    system("pause");
}