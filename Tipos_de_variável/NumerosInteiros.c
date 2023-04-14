/*Crie um algoritmo que leia 3 números inteiros de uma só vez e coloque o resultado da multiplicação entre os 3 em uma variável própria, depois exiba essa variável.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3, Resultado3Valores;
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    Resultado3Valores = valor1 * valor2* valor3;

    printf("\nO valor da multiplicacao dos 3 valores %d * %d * %d =  %d\n", valor1, valor2, valor3, Resultado3Valores);

    return 0;
}