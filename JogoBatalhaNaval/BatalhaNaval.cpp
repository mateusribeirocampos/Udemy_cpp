#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void limpaTela()
{
    system("cls");
}

void iniciaTabuleiro(char tabuleiro[10][10], char mascara[10][10])
{
    int linha, coluna;
    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            tabuleiro[linha][coluna] = 'A';
            mascara[linha][coluna] = '*';
        }
    }
}

void exibeTabuleiro(char tabuleiro[10][10], char mascara[10][10])
{
    int linha, coluna;
    // Imprime o tabuleiro
    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            //cout << " " << tabuleiro[linha][coluna];
            cout << " " << mascara[linha][coluna];
        }
        cout << "\n";
    }
}

void jogo()
{

    /// Variáveis gerais
    char tabuleiro[10][10]; // tabuleiro
    char mascara[10][10];   // mascara que irá esconder o tabuleiro

    // posição escolhida pelo jogador
    int linhaJogada, colunaJogada;

    // loop para estado do jogo
    int estadoDeJogo = 1;

    // inica o tabuleiro com água
    iniciaTabuleiro(tabuleiro, mascara);

    //Estado do jogo em looping
    while (estadoDeJogo == 1)
    {
        limpaTela();

        // exibe o tabuleiro
        exibeTabuleiro(tabuleiro, mascara);

        cout << "Digite uma linha: ";
        cin >> linhaJogada;
        cout << "Digite uma coluna: ";
        cin >> colunaJogada;

        //revela o que está no tabuleiro
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];
    }
}

void menuInicial()
{
    int opcao = 0;

    while (opcao < 1 || opcao > 3)
    {
        cout << "**  JOGO BATALHA NAVAL - 2023 **\n";
        cout << "**  1 - Jogar\n";
        cout << "**  2 - Sobre o jogo\n";
        cout << "**  3 - Sair do jogo\n";
        cout << "Escolha uma opcao\n>>> ";
        cin >> opcao;

        limpaTela();

        switch (opcao)
        {
        case 1:
            cout << "\nVocE escolheu a opcao jogar\n";
            jogo();
            break;
        case 2:
            cout << "\nSobre o Jogo\n";
            limpaTela();
            cout << "Informacoes sobre o jogo batalha naval\n"; // Exibe informações sobre o jogo
            cout << "____________________________________________________\n";
            cout << "|                JOGO BATALHA NAVAL                 |\n";
            cout << "| Desenvolvido por Mateus Campos em 2023            |\n";
            cout << "|                                                   |\n";
            cout << "| Bem-vindo ao Jogo Batalha Naval!                  |\n";
            cout << "| Neste jogo, vocE estarA em uma missAo para        |\n";
            cout << "| afundar os navios inimigos.                       |\n";
            cout << "|                                                   |\n";
            cout << "| O mapa Eh representado por uma grade, onde vocE   |\n";
            cout << "| tentarA determinar a posicao para atirar e        |\n";
            cout << "| verificar se acertou algum navio inimigo.         |\n";
            cout << "|                                                   |\n";
            cout << "| Os navios estAo escondidos no mapa e vocE deverA  |\n";
            cout << "| usar sua estratEgia para afundA-los.              |\n";
            cout << "|                                                   |\n";
            cout << "| Boa sorte, Capitao!                               |\n";
            cout << "|___________________________________________________|\n";

            cout << "\n1 - Voltar ao menu inicial";
            cout << "\n2 - Sair do jogo";
            cout << "\nEscolha uma opcao e tecle ENTER: ";
            cin >> opcao;
            if (opcao == 1)
            {
                menuInicial();
            }
            break;
        case 3:
            cout << "\n <<<<< Vejo vocE em breve, CAPITAO! >>>> \n";
            break;
        }
    }
}

int main()
{

    menuInicial();

    return 0;
}