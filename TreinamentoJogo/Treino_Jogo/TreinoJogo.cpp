#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void limparTela()
{
    system("cls");
}

void informacoesJovo()
{
    cout << "Informacoes sobre o jogo" << endl;
    cout << "\n--------------------------------|";
    cout << "\n| Jogo de completar palavra     |";
    cout << "\n| Informacoes sobre o jogo      |";
    cout << "\n| Complete a palavra sugerida   |";
    cout << "\n|-------------------------------|";
}

void jogo(string nome)
{
    cout << "Ola " << nome << endl;
}

void menuInicial()
{
    int opcoes;
    string nome;
    
    while (opcoes > 0 || opcoes < 3)
    {
        cout << "\n1 - Digite para jogar";
        cout << "\n2 - Digite para obter informacoes";
        cout << "\n3 - Sair";
        cout << "\nDigite uma opcao: ";
        cin >> opcoes;

        limparTela();

        switch (opcoes)
        {
        case 1:
            cout << "\nVoce digitou 1 para Jogar";
            cout << "\nVamos jogar" << endl;
            cout << "Digite seu nome: " << endl;
            cin >> nome;
            jogo(nome);

            break;
        case 2:
            cout << "\nVoce digitou 2 para obter informacao sobre o jogo";
            informacoesJovo();
            break;
        case 3:
            cout << "\nVocE digitou 3 para sair do jogo";
            cout << "\nAtE a prOxima!";
            exit(0);
            break;
        default:
            break;
        }
    }
}

int main()
{

    menuInicial();

    return 0;
}