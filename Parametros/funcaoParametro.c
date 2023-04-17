#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero)
{
    printf("O sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero) {
    return numero - 1;
}

int main()
{
    int a;

    printf("Digite um valor: ");

    //usuario informa
    scanf("%d", &a);

    //valor que recebe o valor para o parametro criado
    mostraSucessor(a);

    printf("\nO antecessor de %d eh %d", a, retornaAntecessor(a));

    return 0;
}