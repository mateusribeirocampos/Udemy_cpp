#include <stdio.h>

int main()
{
    //variaveis
    int a = 20;
    int *pA;

    // imprime o valor de a
    printf("\nValor de a: %d", a);

    // armazena o endereço de a na variável ponteiro
    pA = &a; 

    printf("\nEndereco da variavel var: %p", &a);

    // endereço armazenado na variável ponteiro
    printf("\nO endereco de pA: %p", pA);

    /* acessando o valor usando o ponteiro */
   printf("\nValor de *pA: %d\n", *pA);

    return 0;
}