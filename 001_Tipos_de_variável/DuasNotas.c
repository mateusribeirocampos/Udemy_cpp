#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("\nNota1: %.2f\tNota2: %.2f\tMedia: %.2f\n\n", nota1, nota2, media);

    system("pause");
    return 0;
}
