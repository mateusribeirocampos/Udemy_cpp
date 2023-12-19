/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30], ender[50];
    int dia, mes, ano;
} PESSOA;

typedef struct {
    PESSOA* pPessoa;
    int qtdePessoas;
} LISTAPESSOA;

void criarListaVazia(LISTAPESSOA* listaP)
{
    listaP->pPessoa = (PESSOA*)malloc(sizeof(PESSOA));
    listaP->qtdePessoas = 0;
}

void inserirPessoa(LISTAPESSOA* listaP, PESSOA pessoa)
{
    // Aumenta o tamanho da lista em 1
    listaP->qtdePessoas++;

    // Aloca memória para a nova pessoa
    PESSOA* novaPessoa = (PESSOA*)malloc(sizeof(PESSOA));

    // Copia os dados da pessoa para a nova pessoa
    *novaPessoa = pessoa;

    // Atualiza o ponteiro da lista para apontar para a nova pessoa
    listaP->pPessoa = novaPessoa;
}

void removerPessoa(LISTAPESSOA* listaP, char* nome)
{
    // Procura a pessoa na lista
    PESSOA* pessoa = NULL;
    for (int i = 0; i < listaP->qtdePessoas; i++)
    {
        if (strcmp(listaP->pPessoa[i].nome, nome) == 0)
        {
            pessoa = &listaP->pPessoa[i];
            break;
        }
    }

    // Se a pessoa foi encontrada
    if (pessoa != NULL)
    {
        // Decrementa o tamanho da lista em 1
        listaP->qtdePessoas--;

        // Remove a pessoa da lista
        for (int i = pessoa - listaP->pPessoa; i < listaP->qtdePessoas; i++)
        {
            listaP->pPessoa[i] = listaP->pPessoa[i + 1];
        }
    }
}

void imprimirPessoas(LISTAPESSOA* listaP)
{
    for (int i = 0; i < listaP->qtdePessoas; i++)
    {
        printf("Nome: %s\n", listaP->pPessoa[i].nome);
        printf("Endereço: %s\n", listaP->pPessoa[i].ender);
        printf("Data de Nascimento: %d/%d/%d\n", listaP->pPessoa[i].dia, listaP->pPessoa[i].mes, listaP->pPessoa[i].ano);
    }
}

int main()
{
    PESSOA pessoa1;
    strcpy(pessoa1.nome, "João");
    strcpy(pessoa1.ender, "Rua 1, Bairro A");
    pessoa1.dia = 5;
    pessoa1.mes = 9;
    pessoa1.ano = 2002;

    PESSOA pessoa2;
    strcpy(pessoa2.nome, "Maria");
    strcpy(pessoa2.ender, "Rua 2, Bairro B");
    pessoa2.dia = 15;
    pessoa2.mes = 10;
    pessoa2.ano = 2001;

    LISTAPESSOA listaPessoas;
    criarListaVazia(&listaPessoas);

    inserirPessoa(&listaPessoas, pessoa1);
    inserirPessoa(&listaPessoas, pessoa2);

    imprimirPessoas(&listaPessoas);

    removerPessoa(&listaPessoas, "João");

    imprimirPessoas(&listaPessoas);

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[30], ender[50];
    int dia, mes, ano;
}PESSOA;

typedef struct{
    PESSOA *pPessoa;
    //PESSOA *pPessoa;
    int qtdePessoas;
}LISTAPESSOA; //tinha faltado declarar LISTAPESSOA aqui!

void criarListaVazia(LISTAPESSOA *listaP){
listaP->pPessoa = (PESSOA*)malloc(10 * sizeof(PESSOA));
    listaP -> qtdePessoas = 0;
}

int main()
{
    // Declara uma estrutura PESSOA e atribui o endereço dela à variável pPessoa
    PESSOA pessoa;
    PESSOA* pPessoa = &pessoa;
    //a função strcpy para copiar os caracteres da string "Joao" para o vetor de caracteres da estrutura pessoa
    strcpy(pessoa.nome, "Joao");
    strcpy(pessoa.ender, "Rua A, 896");
    pessoa.dia = 5;
    pessoa.mes = 12;
    pessoa.ano = 2022;

    printf("nome: %s, endereco: %s e data de nascimento: %d / %d / %d ", pessoa.nome, pessoa.ender, pessoa.dia, pessoa.mes, pessoa.ano);
    return 0;
}

