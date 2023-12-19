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

    printf("\nNome: %s, endereco: %s e data de nascimento: %d/%d/%d\n\n", pessoa.nome, pessoa.ender, pessoa.dia, pessoa.mes, pessoa.ano);
    return 0;
}