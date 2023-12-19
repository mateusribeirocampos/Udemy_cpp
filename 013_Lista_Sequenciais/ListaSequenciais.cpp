#include <stdio.h>
#include <stdlib.h>
#include <new>
#define TAM 3
using namespace std;

//aloca um vetor do tamanho pedido
int* alocaVetor(int tam) {

    //cria um ponteiro auxiliar
    int *v;

    //aloca memória para o novo vetor
    v = (int *) malloc(tam * sizeof(int));

    return v;
}

void imprimeSequancial(int *vetor, int tamanhoDaListaSequencial)
{
    for (int i = 0; i < tamanhoDaListaSequencial; i++)
    {
        printf("\nValor %d: %d", i, vetor[i]);
    }
    printf("\n");
}

int main()
{
    int vetor[TAM] = {1, 2, 3}, tamanhoDaLista;

    for (int i = 0; i < TAM; i++)
    {
        printf("\nValor %d: %d", i, vetor[i]);
    }

    imprimeSequancial(vetor, 3);

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    imprimeSequancial(vetor, 3);

    //pedindo tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoDaLista);

    //ponteiro para o novo vetor
    int *vetorLidoNaHora;

    //para o espaço da memória que foi criado para o vetor
    vetorLidoNaHora = alocaVetor(tamanhoDaLista);

    for (int i = 0; i < tamanhoDaLista; i++)
    {
        printf("Digite valor %d: ", i);
        scanf("%d", &vetorLidoNaHora[i]);
    }

    imprimeSequancial(vetorLidoNaHora, tamanhoDaLista);    

    //Criando em c++
    int *vetorEmPlusPlus = new int[5];

    //lendo novos valores
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor numero do vetor[%d]: ", i);
        scanf("%d", &vetorEmPlusPlus[i]);
    }
    
    imprimeSequancial(vetorEmPlusPlus, 5);


    return 0;
}