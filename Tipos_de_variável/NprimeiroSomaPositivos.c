#include <stdio.h>
#include <stdlib.h>

int valor, i, soma = 0;

void DigiteValor()
{
    printf("\nDigite o valor que deseja: \n");
    scanf("%i", &valor);
}

int CalculoNprimierosNumeros()
{
 while (i <= valor)
 {
    soma = soma + i;
    i = i + 1;
 }
    for(int z = 0; z < valor; z++){
    printf("[z = %i] - A soma dos %i primeiros inteiros positivos eh %i\n",z, valor, soma);
    }
}
int main()
{
    DigiteValor();
    CalculoNprimierosNumeros();
    return 0;
}