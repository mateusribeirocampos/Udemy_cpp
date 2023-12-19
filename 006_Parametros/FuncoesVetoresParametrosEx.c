/*Escreva um programa em C que leia um vetor de inteiros com 5 elementos e, em seguida, chame uma função que receba este vetor como parâmetro e calcule a soma de todos os elementos do vetor. A função deve retornar a soma calculada e o programa principal deve imprimir o resultado na tela.*/

#include <stdio.h>

int somaElementosVetor(int *vetor, int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

void imprimeSomaVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}

int main()
{
    // inicializando o vetor de inteiros com 5 elementos
    int v[5];
    int tamanho = 5;

    printf("Digite 5 elementos para o vetor v[5]\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite v[%d] = ", i);
        if (scanf("%d", &v[i]) != 1)
        {
            printf("Erro na leitura do valor!\nApenas valores inteiros\n");
            return 1;
        }
    }

    imprimeSomaVetor(v, tamanho);

    int soma = somaElementosVetor(v, tamanho);
    printf("Soma dos elementos do vetor v: %d\n", soma);

    return 0;
}