#include <stdio.h>

int main()
{
    //variaveis
    int var = 20;
    int *pVar;

    // imprime o valor de a
    printf("\nValor de a: %d", var);

    // armazena o endereço de a na variável ponteiro
    pVar = &var; 

    printf("\nEndereco da variavel var: %p", &var);

    // endereço armazenado na variável ponteiro
    printf("\nO endereco de pA: %p", pVar);

    /* acessando o valor usando o ponteiro */
   printf("\nValor de *pA: %d\n", *pVar);

    return 0;
}