#include <stdio.h>
#include <stdlib.h>
#include <new>

// Definição da estrutura para os nós da lista encadeada
struct estrutura{
    int valorNumerico;
    struct estrutura *proximo;
};

int main()
{
    // Cria o ponteiro que irá apontar para o início da lista encadeada
    estrutura *ponteiroEncadeado;

    // Cria um novo nó (elemento) para a lista encadeada
    estrutura *novoPrimeiroValor = new estrutura;

    // Define o valor numérico do novo nó como 14
    novoPrimeiroValor->valorNumerico = 14;

    // Define o ponteiro "proximo" do novo nó como NULL, já que é o primeiro nó da lista
    novoPrimeiroValor->proximo = NULL;

    // Imprime o valor numérico do novo nó (que é 14)
    printf("%d", novoPrimeiroValor->valorNumerico);

    // Faz o ponteiro da lista encadeada apontar para o primeiro valor (novoPrimeiroValor)
    ponteiroEncadeado = novoPrimeiroValor; 

    // Cria o segundo nó (elemento) para a lista encadeada
    estrutura *novoSegundoValor = new estrutura;

    // Define o valor numérico do segundo nó como 20
    novoSegundoValor->valorNumerico = 20;

    // Define o ponteiro "proximo" do novo nó como NULL, pois ainda não está conectado na lista
    novoSegundoValor->proximo = NULL;

    // Junta os valores com um encadeamento, fazendo o primeiro nó apontar para o segundo nó
    ponteiroEncadeado->proximo = novoSegundoValor;

    // Imprime a lista encadeada
    while (ponteiroEncadeado != NULL)
    {
        // Imprime o valor atual
        printf("\nValor: %d ", ponteiroEncadeado->valorNumerico);

        // Move o ponteiro para o próximo nó da lista
        ponteiroEncadeado = ponteiroEncadeado->proximo;
    }
    
    return 0;
}

