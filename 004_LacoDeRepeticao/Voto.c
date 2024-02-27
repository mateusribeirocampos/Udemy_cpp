#include <stdio.h>

int main(void) {
    int numero, resultado;

    // Lê um valor inteiro digitado pelo usuário
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero); 
    numero = 13;

    // Imprime o resultado
    printf("O resultado da conversão é: %i\n", numero);

    return 0;
}
