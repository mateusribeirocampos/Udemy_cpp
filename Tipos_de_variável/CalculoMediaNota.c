#include <stdio.h>

float notas[8], media = 0;
int i;

int DigiteNotas()
{
    for (i = 0; i < 8; i++)
    {
        printf("Nota: %i\n", i);
        scanf("%f", &notas[i]);
    }
}

void imprimir()
{
    for (i = 0; i < 8; i++)
        media += notas[i];
    media = media / 8;
    printf("Media final: %.2f\n", media);
}

void imprimirTodas()
{
    for(i=0; i<8; i++)
    printf("Todas as notas: %.2f\n", notas[i]);
}

int main()
{
    DigiteNotas();
    imprimir();
    imprimirTodas();

    system("pause");
    return 0;
}