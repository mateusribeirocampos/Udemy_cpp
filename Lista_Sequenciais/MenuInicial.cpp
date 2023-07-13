#include <iostream>
#include <string>
#include <new>
#include <stdlib.h>
using namespace std;

struct pessoa
{
    string nome;
    int rg;
};

void limparTela()
{
    system("cls");
}

void imprimeSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista)
{
    for (int i = 0; i < tamanhoDaLista; i++)
    {
        cout << i << " - " << ponteiroSequencial[i].nome << ", " << ponteiroSequencial[i].rg << endl;
    }
}
// ponteiro com scopo global *&
void adcComecoSequencial(pessoa *&ponteiroSequencial, int *tamnanhoDaLista, string nome, int rg)
{
    // Se a lista for vazia
    if (*tamnanhoDaLista == 0)
    {
        // Caso a lista já tenha membros
        pessoa *novaListaSequencial = new pessoa[*tamnanhoDaLista + 1];
        // insere o primeiro novo elemento
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        // Atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;
    }
    else
    {
        // Caso a lista já tenha membros
        pessoa *novaListaSequencial = new pessoa[*tamnanhoDaLista + 1];

        // insere o primeiro novo elemento
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        for (int cont = 0; cont < *tamnanhoDaLista; cont++)
        {
            novaListaSequencial[cont + 1].nome = ponteiroSequencial[cont].nome;
            novaListaSequencial[cont + 1].rg = ponteiroSequencial[cont].rg;
        }

        // Atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;
    }

    //aumenta o tamanho da lista em 1
    *tamnanhoDaLista = *tamnanhoDaLista + 1;
}

int main()
{
    // Variáveis
    int funcaoDesejada = 1;

    // ponteiro para lista sequencial
    pessoa *ponteiroSequencial;

    // Tamanho da lista
    int tamanhoDaLista = 0;

    // Exemplo
    pessoa *exemploListaSequencial = new pessoa[2]; // vai alocar na memória exatamente o necessário

    // dois registro de exemplo;
    /*exemploListaSequencial[0].nome = "John";
    exemploListaSequencial[0].rg = 123;
    exemploListaSequencial[1].nome = "Maicon";
    exemploListaSequencial[1].rg = 456;*/

    // Faz o ponteiro principal apontar para o novo vetor
    ponteiroSequencial = exemploListaSequencial;

    // Menu
    while (funcaoDesejada < 10 && funcaoDesejada > 0)
    {
        // imprime a lista completa
        imprimeSequencial(ponteiroSequencial, tamanhoDaLista);

        cout << "-------------------------------------------\n";
        cout << "Operacoes \n";
        cout << "1 - Insercao de um Node no inicio da lista. \n";
        cout << "2 - Insercao de um Node no fim da lista. \n";
        cout << "3 - Insercao de um Node na posicao N. \n";
        cout << "4 - Retirar um Node do inicio da lista. \n";
        cout << "5 - Retirar um Node no fim da lista. \n";
        cout << "6 - Retirar um Node na posicao N. \n";
        cout << "7 - Procurar um Node com o campo RG. \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e precione ENTER: \n";

        cin >> funcaoDesejada;

        limparTela();

        // Variáveis usadas nas operações
        string nome;
        int rg;

        switch (funcaoDesejada)
        {
        case 1:
            cout << "\nFuncao escolhida 1 - Insercao de um Node no inicio da lista. \n";

            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o RG: ";
            cin >> rg;

            adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);

            break;
        case 2:
            cout << "\nFuncao escolhida 2 \n";
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        default:
            break;
        }
    }

    return 0;
}