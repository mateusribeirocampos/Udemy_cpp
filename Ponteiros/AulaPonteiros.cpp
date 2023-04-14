#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    // Variável
    int a = 20; // memória reservada para a e ele está alocado em um endereço da memória

    // imprimindo o valor de a
    printf("Valor de a: %d\n", a);

    // imprimindo a posição de a na memória
    printf("Valor de a: %d\n", &a);

    // lendo o valor de uma variável
    printf("Digite o novo valor de a: ");
    scanf("%d", &a);

    // imprimindo
    printf("Valor de a: %d", a);
    */

    // VARIAVEIS ARMAZENAM VALORES
    int b = 10;
    // PONTEIROS ARMAZENAM POSIÇÕES DA MEMÓRIA
    int *ponteiro;
    // PONTEIRO RECEBENDO A POSIÇÃO NA MEMÓRIA DA VARIÁVEL b
    ponteiro = &b;
    // imprimindo o valor de b
    printf("Valor de b: %d\n", b);

    // alterando o valor de b através do ponteiro
    *ponteiro = 40;
    // imprimindo o valor de b
    printf("Valor de b: %d\n", b);

    // imprimindo a posição de b na memória
    printf("Endereco de b na memoria: %p\n", &b);

    // imprimindo o conteúdo apontado pelo ponteiro
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    // imprimindo o novo valor de b
    printf("Novo valor de b: %d\n", b);

    return 0;
}