#include <stdio.h>

void trocaValores(int *num1, int *num2)
{
    // criação de uma variável temporária
    int aux;
    // aux recebe o valor de ponteiro num1
    aux = *num1;
    // o ponteiro num1 recebe o valor do ponteiro num2
    printf("O ponteiro *num1 = %d recebe o valor de aux = %d\n", *num1, aux);
    *num1 = *num2;
    printf("o ponteiro *num1 = %d recebe o valor de *num2 = %d\n", *num1, *num2);
    // o ponteiro num2 recebe o valor do aux que era o do ponteiro num1
    *num2 = aux;
    printf("O ponteiro *num2 = %d recbe o valor de aux = %d\n", *num2, aux);
}

int main()
{
    // variável a que será informada pelo usuário e a b que já está definida
    int a;
    int b;

    printf("Digite um valor inteiro para a: ");
    scanf("%d", &a);

    printf("Digite um valor inteiro para a: ");
    scanf("%d", &b);

    printf("Valores da variaveis atuais\n");
    printf("O valor de a: %d e b: %d\n", a, b);

    // A função trocaValores irá receber o endereço de a e b
    trocaValores(&a, &b);

    printf("Valores da variaveis trocadas\n");
    printf("O valor de a: %d e b: %d\n", a, b);

    return 0;
}