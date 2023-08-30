#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void limpaTela()
{
    system("cls");
}

void iniciaTabuleiro(char tabuleiro[3][3])
{
    int linhas, colunas;

    // Matrix 3 x 3
    for (linhas = 0; linhas < 3; linhas++)
    {
        for (colunas = 0; colunas < 3; colunas++)
        {
            tabuleiro[linhas][colunas] = '-';
        }
    }
}

void exibeTabuleiro(char tabuleiro[3][3])
{
    // Auxiliares para o tabuleiro
    int linhas, colunas;

    cout << "\n";
    // Matrix 3 x 3
    for (linhas = 0; linhas < 3; linhas++)
    {
        for (colunas = 0; colunas < 3; colunas++)
        {
            cout << tabuleiro[linhas][colunas];
        }
        cout << "\n";
    }
}

void jogo()
{
    // Variáveis gerais
    //  tabuleiro do jogo
    char tabuleiro[3][3];

    // pede ao usuário inserir linha e coluna com essas variáveis
    int linhaJogada, colunaJogada;

    // estado de jogo
    int estadoDeJogo = 1;

    // Turno do jogado
    int turnoDoJogador = 1;

    // Quantas vezes os jogadores jogaram
    int rodada = 0;

    // Coloca os '-' no tabuleiro
    iniciaTabuleiro(tabuleiro);

    while (rodada < 9)
    {
        limpaTela();

        // exibe o tabuleiro na tela
        exibeTabuleiro(tabuleiro);

        cout << "\nRodada: " << rodada << "\n";

        // lê a posição desejada
        cout << "\nJogador, digite uma linha: ";
        cin >> linhaJogada;
        cout << "\nJogador, digite uma coluna: ";
        cin >> colunaJogada;

        // Verifica de quem é a vez para posicionar o marcador
        if (turnoDoJogador == 1)
        {
            tabuleiro[linhaJogada][colunaJogada] = 'X';
            turnoDoJogador = 2;
        }
        else
        {
            tabuleiro[linhaJogada][colunaJogada] = 'O';
            turnoDoJogador = 1;
        }
        // Aumenta uma rodada
        rodada++;
    }
}

void menuInicial()
{

    int opcao;

    while (opcao < 1 || opcao > 3)
    {
        cout << "***** JOGO DA VELHA  *************";
        cout << "\n*** 1 - Jogar  ";
        cout << "\n*** 2 - Informacao sobre o Jogo ";
        cout << "\n*** 3 - Sair ";
        cout << "\nDigite a sua escolha: ";
        cin >> opcao;

        limpaTela();

        switch (opcao)
        {
        case 1:
            cout << "VocE escolheu a opcao jogar!\nBoa sorte!!!\n";
            jogo();
            break;
        case 2:
            cout << "\nSobre o Jogo\n";
            limpaTela();
            cout << "Informacoes sobre o jogo da velha\n"; // Exibe informações sobre o jogo
            cout << "____________________________________________________\n";
            cout << "|                JOGO DA VELHA                      |\n";
            cout << "| Desenvolvido por Mateus Campos em 2023.           |\n";
            cout << "|                                                   |\n";
            cout << "| Bem-vindo ao Jogo da Velha!                       |\n";
            cout << "| Neste jogo, dois jogadores se enfrentam em uma    |\n";
            cout << "| batalha estrategica para completar uma linha,     |\n";
            cout << "| coluna ou diagonal com seus simbolos.             |\n";
            cout << "|                                                   |\n";
            cout << "| O tabuleiro eh representado por uma grade 3x3,    |\n";
            cout << "| onde os jogadores escolhem suas posicoes para     |\n";
            cout << "| inserir seus simbolos (geralmente 'X' e 'O').     |\n";
            cout << "|                                                   |\n";
            cout << "| Os jogadores competem para serem os primeiros a   |\n";
            cout << "| alinhar tres de seus simbolos e vencer o jogo.    |\n";
            cout << "|                                                   |\n";
            cout << "| Que a melhor estrategia venca!                    |\n";
            cout << "|___________________________________________________|\n";

            cout << "\n1 - Voltar ao menu inicial";
            cout << "\n2 - Sair do jogo";
            cout << "\nEscolha uma opcao e tecle ENTER: ";
            cin >> opcao;

            limpaTela();

            if (opcao == 1)
            {
                menuInicial();
            }
            else
            {
                cout << "\n <<<<< Vejo vocE em breve! >>>> \n";
            }
            break;
        case 3:
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