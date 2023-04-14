#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, media;
    printf("\nDigite a nota 1: ");
    scanf("%i", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%i", &nota2);

    printf("A diferenca entre dois numeros inteiros %i - %i = %i\n", nota1, nota2, abs(nota1 - nota2));

    system("pause");
    return 0;
}