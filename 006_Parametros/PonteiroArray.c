#include <stdio.h>

int funcaoMostra(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor[%d] = %d\r\n", i, *(vetor + i)); //*vetor++
    }
    return *vetor;    
}

int main()
{

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    funcaoMostra(vetor, tamanho);

    return 0;
}