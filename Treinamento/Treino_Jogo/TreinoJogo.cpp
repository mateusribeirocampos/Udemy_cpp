#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void limparTela(){
    system("cls");
}

void jogo(){
    string nome;

    cout << "\nVamos jogar" << endl;
    cout << "Digite seu nome: " << endl;
    cin >> nome;

    
}

void menuInicial()
{
    int opcoes;

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
            jogo();
            break;
        case 2:
            cout << "\nVoce digitou 2 para obter informacao sobre o jogo";
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