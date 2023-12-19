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
    // Verfica se a lista está vazia
    if (ponteiroEncadeada->nome == "")
    {
        return 0;
    }

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
        // imprime a lista
        cout << p->nome << ", " << p->rg << endl;

        // Atualiza o cursor
        p = p->proximo;
    }
}

void adcComecoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg)
{

    // Adiciona novo valor
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = ponteiroEncadeada;

    // Verifica se o ponteiro da lista encadeada no nome está vazio seja igual a nulo desencadeando a lista, SENÃO estiver vazio ele coloca no inicio da lista.
    if (ponteiroEncadeada->nome == "")
    {
        novoValor->proximo = NULL;
    }
    else
    {
        novoValor->proximo = ponteiroEncadeada;
    }

    // Redireciona o ponteiro
    ponteiroEncadeada = novoValor;
}

void adcFimEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg)
{
    // Adiciona novo valor
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    // Criar um cursor que é um Ponteiro auxiliar
    pessoa *p = ponteiroEncadeada;

    while (p != NULL) // Enquanto p for diferente de nulo
    {
        if (p->proximo == NULL) // O p próximo for igual a nulo
        {
            p->proximo = novoValor; // entao o p próximo vai adicionar no novo valor
            return;                 // retorna para parar sem precisar atualizar o cursor, senão ele vai atualizar.
        }
        // Atualiza o cursor
        p = p->proximo;
    }
}

void adcPosicaoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg, int posicao)
{
    // Adiciona novo valor
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    // Criar um cursor que é um Ponteiro auxiliar
    pessoa *p = ponteiroEncadeada;

    // contador de posições
    int cont = 0;

    while (cont <= posicao)
    {

        if (cont == posicao - 1)
        {
            // Auxiliar do valor
            pessoa *aux = new pessoa;

            // Armazena o próximo valor
            aux->proximo = p->proximo;

            // coloca o novo valor próximo dele
            p->proximo = novoValor;

            // novo valor aponte para o auxiliar ou seja aponta para o próximo
            novoValor->proximo = aux->proximo;

            delete aux;
        }

        // Atualiza o cursor
        p = p->proximo;

        cont++;
    }
}

void removeInicioEncadeada(pessoa *&ponteiroEncadeada)
{

    if (ponteiroEncadeada->proximo == NULL)
    {
        // Adiciona novo valor
        pessoa *novoValor = new pessoa;
        novoValor->nome = "";
        novoValor->rg = 0;
        novoValor->proximo = NULL;

        ponteiroEncadeada = novoValor;
    }
    else
    {
        // Faz o ponteiro principal apontar para o próximo valor
        ponteiroEncadeada = ponteiroEncadeada->proximo;
    }
}

void removeFimEncadeada(pessoa *&ponteiroEncadeada)
{
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;

    // Ponteiro cursor auxiliar
    p = ponteiroEncadeada;

    // Passa pela lista
    while (p->proximo != NULL)
    {
        // O auxiliar sempre fica sendo um antes do cursor
        aux = p;

        // Passa o cursor para o próximo elemento
        p = p->proximo;
    }

    // Muda o final da lista para o último elemento
    aux->proximo = NULL;
}

void removePosicaoEncadeada(pessoa *&ponteiroEncadeada, int posicao)
{
    // Criar um cursor que é um Ponteiro auxiliar
    pessoa *p = ponteiroEncadeada;

    // contador de posições
    int cont = 0;

    while (cont <= posicao)
    {

        // Quando chega um antes da posição desejada
        if (cont == posicao - 1)
        {
            // cria um auxiliar
            pessoa *aux = new pessoa;

            // Auxiliar recebe o elemento que será eliminado
            aux = p->proximo;

            // faz com que o proximo pule um elemento;
            p->proximo = aux->proximo;

            delete (aux);
        }

        // Passa o cursor para o próximo elemento
        p = p->proximo;

        // Registra uma movimentação
        cont++;
    }
}

string retornaNomeEncadeada(pessoa *&ponteiroEncadeada, int rg)
{

    //Nome a ser retornado
    string nome = "Nao encontrado";

    // Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    // Passa pela lista
    while (p != NULL)
    {
        //Quando encontra o rg
        if (p->rg == rg)
        {
            //Recebe o nome do rg encontrado
            nome = p->nome;

            return nome;
        }
        
        p = p->proximo;
    }

    return nome;
}

int main()
{
    // Variaveis
    int funcaoDesejada = 1;

    // Criar um ponteiro principal que vai sempre apontar para primeira estrutura
    pessoa *ponteiroEncadeada = new pessoa;
    ponteiroEncadeada->nome = "";
    ponteiroEncadeada->rg = 0;
    ponteiroEncadeada->proximo = NULL;

    /*
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
    */

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

        if (retornaTamanho(ponteiroEncadeada) == 0)
        {
            cout << "\nLista Vazia\n";
        }
        else
        {
            // imprime a lista
            imprimeEncadeada(ponteiroEncadeada);
        }

        cin >> funcaoDesejada;

        limparTela();

        // Adicinar variáveis
        string nome;
        int rg, posicao;

        switch (funcaoDesejada)
        {
        case 1:
            cout << "Funcao escolhida: 1 - Insercao de um Node no inicio da lista. \n";
            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o RG: ";
            cin >> rg;

            adcComecoEncadeada(ponteiroEncadeada, nome, rg);

            break;
        case 2:
            cout << "Funcao escolhida: 2 - Insercao de um Node no fim da lista. \n";

            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o RG: ";
            cin >> rg;

            if (retornaTamanho(ponteiroEncadeada) == 0)
            {
                adcComecoEncadeada(ponteiroEncadeada, nome, rg); // se o retorna tamanho for igual a 0 então adicona no começo
            }
            else
            {
                adcFimEncadeada(ponteiroEncadeada, nome, rg); // se exitir adiciona no final da lista
            }

            break;
        case 3:
            cout << "Funcao escolhida: 3 - Insercao de um Node na posicao N. \n";
            cout << "Digite a posicao que quer inserir: ";
            cin >> posicao;
            cout << "Digite o nome: ";
            cin >> nome;
            cout << "Digite o RG: ";
            cin >> rg;

            if (posicao == 0)
            {
                adcComecoEncadeada(ponteiroEncadeada, nome, rg);
            }
            else if (posicao == retornaTamanho(ponteiroEncadeada) - 1)
            {
                adcFimEncadeada(ponteiroEncadeada, nome, rg);
            }
            else
            {
                adcPosicaoEncadeada(ponteiroEncadeada, nome, rg, posicao);
            }

            break;
        case 4:
            cout << "Funcao escolhida: 4 - Retirar um Node no inicio da lista. \n";

            removeInicioEncadeada(ponteiroEncadeada);

            break;
        case 5:
            cout << "Funcao escolhida: 5 - Retirar um Node no fim da lista. \n";

            if (retornaTamanho(ponteiroEncadeada) == 1)
            {
                removeInicioEncadeada(ponteiroEncadeada); // se o retorna tamanho for igual a 1 então remove no começo
            }
            else
            {
                removeFimEncadeada(ponteiroEncadeada); // se exitir remove no final da lista
            }

            break;
        case 6:
            cout << "Funcao escolhida: 6 - Retirar um Node na posicao N. \n";
            cout << "Digite a posicao que quer deletar: ";
            cin >> posicao;

            if (posicao == 0)
            {
                removeInicioEncadeada(ponteiroEncadeada); // se o retorna tamanho for igual a 1 então remove no começo
            }
            else if (posicao == retornaTamanho(ponteiroEncadeada) - 1)
            {
                removeFimEncadeada(ponteiroEncadeada); // se exitir remove no final da lista
            }
            else
            {
                removePosicaoEncadeada(ponteiroEncadeada, posicao);
            }

            break;
        case 7:
            cout << "Funcao escolhida: 7 - Procurar um Node com o campo RG. \n";

            // RG bucado pelo usuário
            cout << "Digite o RG: ";
            cin >> rg;

            cout << "\nO nome do RG " << rg << " eh: " << retornaNomeEncadeada(ponteiroEncadeada, rg) << "\n";

            break;
        case 8:
            cout << "Funcao escolhida: 8 - Imprimir lista. \n";
            
            imprimeEncadeada(ponteiroEncadeada);

            break;
        case 9:
            cout << "Funcao escolhida: 9 - Sair do sistema. \n";
            exit(0);
            break;
        }
    }

    return 0;
}