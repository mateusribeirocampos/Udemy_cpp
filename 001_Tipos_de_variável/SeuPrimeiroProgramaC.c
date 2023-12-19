#include <stdio.h>
#include <stdlib.h>

int valor, quadrado;

int DigiteValor()
{
    printf("\n\tCalculo do quadrado de uma sequencia de numeros\n");
    printf("\nDigite sequencia de numeros inteiros nao-nulos, seguida por 0:\n=> ");
    scanf("%i", &valor);

}

int QuadradoValor()
{
    while (valor != 0)
    {
        quadrado = valor * valor;
        printf("O quadrado de valor: %i eh %i\n", valor, quadrado);
    printf("\nDigite sequencia de numeros inteiros nao-nulos, seguida por 0:\n=> ");
        scanf("%d", &valor);
    }
}

int main()
{   
    DigiteValor();
    QuadradoValor();
    return 0;
}