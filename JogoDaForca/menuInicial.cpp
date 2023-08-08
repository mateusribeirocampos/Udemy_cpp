#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela() 
{
    system("cls");
}

void menuInicial()
{

    // Opção escolhida pelo usuário
    int opcao = 0;

    // Enquanto o jogador não digita uma opcao valida o menu aparece novamente
    while (opcao < 1 || opcao > 3)
    {
        limpaTela();
        cout << "Benvindo ao JOGO";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER: ";

        // Faz a leitura da opcao escolhida
        cin >> opcao;

        // Faz de acordo com a opção escolhida
        switch (opcao)
        {
        case 1:
            cout << "JOGO INICIADO";
            break;
        case 2:
        // Mostra informação do jogo
            cout << "Informacoes do jogo";
            break;
        case 3:
            cout << " <==== Ate mais ====> ";
            exit(0);
            break;
        }
    }
}

int main()
{
    menuInicial();
    return 0;
}