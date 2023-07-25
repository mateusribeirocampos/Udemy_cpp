#include <iostream>
#include <stdlib.h>
#include <new>
#include <string>

using namespace std;

struct pessoa
{
    string nome;
    int rg;
    struct pessoa *proximo;
};

void limparTela()
{
    system("cls");
}

int retornaTamanho(pessoa *ponteiroEncadeada)
{
    // Tamanho da lista
    int tamanho = 0;

    // Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    while (p != NULL)
    {
        // Atualiza o cursor
        p = p->proximo;

        // Contador de tamanho aumenta
        tamanho++;
    }
    return tamanho;
}

void imprimeEncadeada(pessoa *ponteiroEncadeada)
{
    // Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    while (p != NULL)
    {
        //imprime a lista
        cout << p->nome << ", " << p->rg << endl;

        // Atualiza o cursor
        p = p->proximo;

    }
}

int main()
{
    // Variaveis
    int funcaoDesejada = 1;

    // Criar um ponteiro principal que vai sempre apontar para primeira estrutura
    pessoa *ponteiroEncadeada;

    // cria o primeiro valor
    pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome = "John";
    novoPrimeiroValor->rg = 123;
    novoPrimeiroValor->proximo = NULL;

    // Transforma o ponteiro do inicio da lista no novo valor
    ponteiroEncadeada = novoPrimeiroValor;

    // cria o segundo valor
    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome = "Jorge";
    novoSegundoValor->rg = 312;
    novoSegundoValor->proximo = NULL;

    // Encadeamento de valores
    novoPrimeiroValor->proximo = novoSegundoValor;

    while (funcaoDesejada < 9 && funcaoDesejada > 0)
    {

        cout << "\nOperacoes \n";
        cout << "1 - Insercao de um Node no inicio da lista. \n";
        cout << "2 - Insercao de um Node no fim da lista. \n";
        cout << "3 - Insercao de um Node na posicao N. \n";
        cout << "4 - Retirar um Node no inicio da lista. \n";
        cout << "5 - Retirar um Node no fim da lista. \n";
        cout << "6 - Retirar um Node na posicao N. \n";
        cout << "7 - Procurar um Node com o campo RG. \n";
        cout << "8 - Imprimir lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";
        cout << "Tamanho Atual: " << retornaTamanho(ponteiroEncadeada) << endl;

        // imprime a lista
        imprimeEncadeada(ponteiroEncadeada);

        cin >> funcaoDesejada;

        limparTela();

        switch (funcaoDesejada)
        {
        case 1:
            cout << "Funcao escolhida: 1 - Insercao de um Node no inicio da lista. \n";

            break;
        case 2:
            cout << "Funcao escolhida: 2 - Insercao de um Node no fim da lista. \n";
            break;
        case 3:
            cout << "Funcao escolhida: 3 - Insercao de um Node na posicao N. \n";

            break;
        case 4:
            cout << "Funcao escolhida: 4 - Retirar um Node no inicio da lista. \n";

            break;
        case 5:
            cout << "Funcao escolhida: 5 - Retirar um Node no fim da lista. \n";

            break;
        case 6:
            cout << "Funcao escolhida: 6 - Retirar um Node na posicao N. \n";

            break;
        case 7:
            cout << "Funcao escolhida: 7 - Procurar um Node com o campo RG. \n";

            break;
        case 8:
            cout << "Funcao escolhida: 8 - Imprimir lista. \n";

            break;
        case 9:
            cout << "Funcao escolhida: 9 - Sair do sistema. \n";
            exit(0);
            break;
        }
    }

    return 0;
}