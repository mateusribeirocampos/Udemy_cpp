#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

// Cabeçalhos de funções
void menuInicial();

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

void exibeMapa()
{
    // Mapa indicador de colunas
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << "      ";
        }
        cout << i << "  ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << "      ";
        }
        cout << "|  ";
    }
    cout << "\n";
}

void exibeTabuleiro(char tabuleiro[10][10], char mascara[10][10], bool mostraGabarito)
{

    char blue[] = {0x1b, '[', '1', ';', '3', '4', 'm', 0};
    char normal[] = {0x1b, '[', '1', ';', '3', '9', 'm', 0};
    char green[] = {0x1b, '[', '1', ';', '3', '2', 'm', 0};

    int linha, coluna;
    // Imprime o mascara
    for (linha = 0; linha < 10; linha++)
    {
        cout << linha << " - ";
        for (coluna = 0; coluna < 10; coluna++)
        {
            switch (mascara[linha][coluna])
            {
            case 'A':
                cout << blue << "  " << mascara[linha][coluna] << normal;
                break;
            case 'P':
                cout << green << "  " << mascara[linha][coluna] << normal;
                break;
            default:
                cout << "  " << mascara[linha][coluna];
                break;
            }
        }
        cout << "\n";
    }

    if (mostraGabarito == true)
    {
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

            if (tabuleiro[linhaAleatoria][colunaAleatoria] == 'A')
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

void jogo(string nomeDoJogador)
{

    /// Variáveis gerais
    char tabuleiro[10][10]; // tabuleiro
    char mascara[10][10];   // mascara que irá esconder o tabuleiro

    // posição escolhida pelo jogador
    int linhaJogada, colunaJogada;

    // loop para estado do jogo
    // int estadoDeJogo = 1;

    // Variável para contar pontos
    int pontos = 0;

    // Variável para cuidar do número de tentativa para o jogador!
    int tentativas = 0, maximoTentativas = 5;

    // Variável para mensagem de feedback para o jogador
    string menssagem = "Bem vindo ao JOGO";

    // Opcao de reinicio do jogo
    int opcao;

    // inica o tabuleiro com água
    iniciaTabuleiro(tabuleiro, mascara);

    // posiciona barcos aleatoriamente
    posicionaBarcos(tabuleiro);

    // Estado do jogo em looping
    while (tentativas < maximoTentativas)
    {
        limpaTela();

        // exibe o mapa de inicações do tabuleiro
        exibeMapa();

        // exibe o tabuleiro
        exibeTabuleiro(tabuleiro, mascara, true);

        cout << "\nPontos: " << pontos << ", tentativas restantes: " << maximoTentativas - tentativas;
        cout << "\n"
             << menssagem;

        // Verificação de dados
        linhaJogada = -1;
        colunaJogada = -1;

        while ((linhaJogada < 0 || colunaJogada < 0) || (linhaJogada > 9 || colunaJogada > 9))
        {
            cout << "\n"
                 << nomeDoJogador << ", digite uma linha: ";
            cin >> linhaJogada;
            cout << "\n"
                 << nomeDoJogador << ", digite uma coluna: ";
            cin >> colunaJogada;
        }

        // Verifica o que aconteceu
        verificaTiro(tabuleiro, linhaJogada, colunaJogada, &pontos, &menssagem);

        // revela o que está no tabuleiro
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];

        tentativas++;
    }

    cout << "\nFim do JOGO, o que deseja fazer? ";
    cout << "\n1 - Jogar novamente";
    cout << "\n2 - Ir para o Menu";
    cout << "\n3 - Sair do jogo";
    cout << "\nDigite o que deseja fazer: ";
    cin >> opcao;

    limpaTela();

    switch (opcao)
    {
    case 1:
        jogo(nomeDoJogador);
        break;
    case 2:
        menuInicial();
        break;
    case 3:
        cout << "\n <<<<< Vejo vocE em breve, CAPITAO! >>>> \n";
        break;
    }
}

void menuInicial()
{
    // opção escolhida pelo usuário
    int opcao = 0;
    // Nome no usuário
    string nomeDoJogador;

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
            cout << "Qual o seu nome: ";
            cin >> nomeDoJogador;
            jogo(nomeDoJogador);
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
            else
            {
                cout << "\n <<<<< Vejo vocE em breve, CAPITAO! >>>> \n";
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