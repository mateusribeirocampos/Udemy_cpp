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
void adcComecoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg)
{
    // Se a lista for vazia
    if (*tamanhoDaLista == 0)
    {
        // Caso a lista já tenha membros
        pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];
        // insere o primeiro novo elemento
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        // Atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;
    }
    else
    {
        // Caso a lista já tenha membros
        pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

        // insere o primeiro novo elemento
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        for (int cont = 0; cont < *tamanhoDaLista; cont++)
        {
            novaListaSequencial[cont + 1].nome = ponteiroSequencial[cont].nome;
            novaListaSequencial[cont + 1].rg = ponteiroSequencial[cont].rg;
        }

        // Atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;
    }

    // aumenta o tamanho da lista em 1
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

void adcFimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg)
{

    // Criar uma lista com um tamanho maior
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    for (int cont = 0; cont < *tamanhoDaLista; cont++)
    {
        novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }

    // posiciona o último elemento
    novaListaSequencial[*tamanhoDaLista].nome = nome;
    novaListaSequencial[*tamanhoDaLista].rg = rg;

    // Atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    // aumenta o tamanho da lista em 1
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

void adcPosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg, int posicao)
{
    // Criar uma lista com um tamanho maior
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    // Passa os elementos do vetor antigo para o novo
    for (int cont = 0; cont < posicao; cont++)
    {
        novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }

    // Adiciona o novo registro na posicao correta
    novaListaSequencial[posicao].nome = nome;
    novaListaSequencial[posicao].rg = rg;

    // Coloca o resto dos valores antigos
    for (int cont = posicao + 1; cont < *tamanhoDaLista + 1; cont++)
    {
        novaListaSequencial[cont].nome = ponteiroSequencial[cont - 1].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont - 1].rg;
    }
    // Atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    // aumenta o tamanho da lista em 1
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

void removeInicioSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista)
{
    // Cria um vetor com uma posicao a menos
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    // Passa os elementos do vetor antigo para o novo
    for (int cont = 1; cont < *tamanhoDaLista; cont++)
    {
        novaListaSequencial[cont - 1].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont - 1].rg = ponteiroSequencial[cont].rg;
    }
    // Atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    // Reduz o tamanho da lista em 1
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

void removeFimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista)
{

    // Criar uma lista com um tamanho menor
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    for (int cont = 0; cont < *tamanhoDaLista - 1; cont++)
    {
        novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }

    // Atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    // aumenta o tamanho da lista em 1
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

void removePosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int posicao)
{

    // Criar uma lista com um tamanho menor
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    // passo os valores de acordo com o contador
    for (int i = 0; i < *tamanhoDaLista - 1; i++)
    {
        // Se estiver antes da posição passa normalmente
        if (i < posicao)
        {
            novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
            novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
        }
        else
        {
            novaListaSequencial[i].nome = ponteiroSequencial[i + 1].nome;
            novaListaSequencial[i].rg = ponteiroSequencial[i + 1].rg;
        }
    }

    // Atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    // aumenta o tamanho da lista em 1
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

string retornaNomeSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int rg)
{
    string nome = "Nome nao encontrado!";

    // Busca pelo nome com o rg digitado
    for (int i = 0; i < *tamanhoDaLista; i++)
    {
        if (ponteiroSequencial[i].rg == rg)
        {
            nome = ponteiroSequencial[i].nome;
        }
    }

    return nome;
}

int main()
{
    // Variáveis
    int funcaoDesejada = 1;

    // ponteiro para lista sequencial
    pessoa *ponteiroSequencial;

    // Tamanho da lista
    int tamanhoDaLista = 0;

    // Menu
    while (funcaoDesejada < 10 && funcaoDesejada > 0)
    {

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
        int rg, posicao;

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
            cout << "\nFuncao escolhida 2 - Insercao de um Node no fim da lista. \n";

            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o RG: ";
            cin >> rg;

            // Se a lista for vazia, usamos a função de cria no início
            if (tamanhoDaLista == 0)
            {
                adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
            }
            else
            {
                adcFimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
            }

            break;
        case 3:
            cout << "\nFuncao escolhida 3 - Insercao de um Node na posicao N. \n";

            cout << "Digite uma posicao: ";
            cin >> posicao;
            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o RG: ";
            cin >> rg;

            // Se estiver adicionando no começo (posição 0)
            if (posicao == 0)
            {
                // Se estiver adicionando no começo
                adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
            }
            else if (posicao == tamanhoDaLista)
            {
                // Quando quer adicionar ao fim
                adcFimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
            }
            else
            {
                // Adiciona uma posição especifica
                adcPosicaoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg, posicao);
            }

            break;
        case 4:
            cout << "\nFuncao escolhida 4 - Retirar um Node do inicio da lista. \n";

            // Se a lista for vazia
            if (tamanhoDaLista == 0)
            {
                cout << "\nSua lista esta vazia! \n";
            }
            else
            {
                // Adiciona uma posição especifica
                removeInicioSequencial(ponteiroSequencial, &tamanhoDaLista);
            }

            break;
        case 5:
            cout << "\nFuncao escolhida 5 - Retirar um Node no fim da lista. \n";

            // Se a lista for vazia
            if (tamanhoDaLista == 0)
            {
                cout << "\nSua lista esta vazia!\n";
            }
            else
            {
                removeFimSequencial(ponteiroSequencial, &tamanhoDaLista);
            }

            break;
        case 6:
            cout << "\nFuncao escolhida 6 - Retirar um Node na posicao N. \n";

            // Se a lista for vazia
            if (tamanhoDaLista == 0)
            {
                cout << "\nSua lista esta vazia!\n";
            }
            else
            {
                cout << "Digite uma posicao: ";
                cin >> posicao;

                if (posicao == 0)
                {
                    // remove uma posição especifica
                    removeInicioSequencial(ponteiroSequencial, &tamanhoDaLista);
                }
                else if (posicao == tamanhoDaLista - 1)
                {
                    removeFimSequencial(ponteiroSequencial, &tamanhoDaLista);
                }
                else
                {
                    removePosicaoSequencial(ponteiroSequencial, &tamanhoDaLista, posicao);
                }
            }
            break;
        case 7:
            cout << "\nFuncao escolhida 7 - Procurar um Node com o campo RG. \n";

            // Se a lista for vazia
            if (tamanhoDaLista == 0)
            {
                cout << "\nSua lista esta vazia!\n";
            }
            else
            {
                cout << "Digite um RG: ";
                cin >> rg;

                cout << "\n\nNome do RG " << rg << ": " << retornaNomeSequencial(ponteiroSequencial, &tamanhoDaLista, rg) << "\n\n";
            }

            break;
        case 8:
            cout << "\nFuncao escolhida 8 - Imprimir a Lista.\n";
            
            // Se a lista for vazia
            if (tamanhoDaLista == 0)
            {
                cout << "\nSua lista esta vazia!\n";
            }
            else
            {
                // imprime a lista Sequencial completa
                imprimeSequencial(ponteiroSequencial, tamanhoDaLista);
            }
            break;
        case 9:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}