#include <stdio.h>
#include <stdlib.h>

float retornaQuebrado();

int retornaDez()
{
    printf("Ola!");
    return 10;
}

char retornaLetra() {
    return 'i';
}


int main()
{
    //Definição variável
    int a;
    float b;
    char letra;

    letra = retornaLetra();

    printf("%c\n", letra);

    // passando o retorno de um função para uma variável
    a = retornaDez();

    printf("%d", a);

    // imprimindo texto
    printf("\nHi\n");

    b = retornaQuebrado();
    printf("Valor de b: %.2f", b);

    return 0;
}

float retornaQuebrado() {
    return 5.5;
}