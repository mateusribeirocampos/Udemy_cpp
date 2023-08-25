#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
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
    // Imprime o mascara
    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            // cout << " " << tabuleiro[linha][coluna];
            cout << "  " << mascara[linha][coluna];
        }
        cout << "\n";
    }

    cout << "\n";
    // Imprime o tabuleiro
    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            cout << "  " << tabuleiro[linha][coluna];
        }
        cout << "\n";
    }
}

void posicionaBarcos(char tabuleiro[10][10])
{
    // coloca 10 barcos no tabuleiro
    int cont, linhaAleatoria, colunaAleatoria, quantidade = 10, quantidadePosicionada = 0;

    // Verifica se ja posicionou todos os barcos
    while (quantidadePosicionada < quantidade)
    {
        for (cont = 0; cont < quantidade; cont++)
        {
            // Gera linha randômica de 0 a 9 de barcos
            linhaAleatoria = rand() % 10;
            // Gera linha randômica de 0 a 9 de barcos
            colunaAleatoria = rand() % 10;

            if (tabuleiro[linhaAleatoria][colunaAleatoria] = 'A')
            {
                // Posiciona 10 barcos aleatória no tabuleiro
                tabuleiro[linhaAleatoria][colunaAleatoria] = 'P';
                // Aumenta a quantidade barcos posicionada
                quantidadePosicionada++;
            }
        }
    }

    // tabuleiro[0][0] = 'P';
    // tabuleiro[2][0] = 'P';
    // tabuleiro[5][5] = 'P';
    // tabuleiro[6][7] = 'P';
}

void verificaTiro(char tabuleiro[10][10], int linhaJogada, int colunaJogada, int *pontos, string *mensagem)
{
    // Verifica quantos pontos adicionar
    switch (tabuleiro[linhaJogada][colunaJogada])
    {
    case 'P':
        *pontos = *pontos + 10;
        *mensagem = "VocE acertou um BARCO PEQUENO (10 pontos!!!)";
        break;
    case 'A':
        *mensagem = "VocE acerto a AGUA :-(";
        break;
    default:
        break;
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

    // Variável para contar pontos
    int pontos = 0;

    //Variável para cuidar do número de tentativa para o jogador!
    int tentativas = 0, maximoTentativas = 5;

    //Variável para mensagem de feedback para o jogador
    string menssagem = "Bem vindo ao JOGO";

    // inica o tabuleiro com água
    iniciaTabuleiro(tabuleiro, mascara);

    // posiciona barcos aleatoriamente
    posicionaBarcos(tabuleiro);

    // Estado do jogo em looping
    while (tentativas < maximoTentativas)
    {
        limpaTela();

        // exibe o tabuleiro
        exibeTabuleiro(tabuleiro, mascara);

        cout << "\nPontos: " << pontos << ", tentativas restantes: " << maximoTentativas - tentativas;
        cout << "\n" << menssagem;

        cout << "\nDigite uma linha: ";
        cin >> linhaJogada;
        cout << "Digite uma coluna: ";
        cin >> colunaJogada;

        //Verifica o que aconteceu
        verificaTiro(tabuleiro, linhaJogada, colunaJogada, &pontos, &menssagem);

        // revela o que está no tabuleiro
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];

        tentativas++;
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

    // Inicializa o gerador de números aleatórios
    srand((unsigned)time(NULL));

    menuInicial();

    return 0;
}