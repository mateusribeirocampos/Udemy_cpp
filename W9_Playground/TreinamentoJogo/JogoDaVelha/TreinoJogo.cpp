#include <iostream>
#include <string>
#include <vector>

void limpaTela()
{
    system("cls");
}

void iniciaTabubeiro(char tabuleiro[3][3])
{
    int linha, coluna;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            tabuleiro[linha][coluna] = '-';
        }
    }
}

void exibeTabuleiro(char tabuleiro[3][3])
{
    int linha, coluna;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            std::cout << tabuleiro[linha][coluna];
        }
        std::cout << std::endl;
    }
}

void jogar(std::string nomeDoJogador1, std::string nomeDoJogador2)
{
    char tabuleiro[3][3];                  // Tabuleiro do jogo
    int linha = 0, coluna = 0;             // Linha e coluna que o jogador escolheu
    int linhaJogada = 0, colunaJogada = 0; // Linha e coluna que o jogador escolheu
    int estadoJogo = 1;                    // 1 - Jogo em andamento, 2 - Jogo finalizado
    int turnoJogador = 1;                  // 1 - Jogador 1, 2 - Jogador 2
    int rodada = 0;                        // Contador de rodadas

    iniciaTabubeiro(tabuleiro);

    while (rodada < 9 && estadoJogo == 1)
    {

        limpaTela();

        exibeTabuleiro(tabuleiro);
        std::cout << "Rodada: " << rodada << std::endl;

        std::cout << "Jogador digite uma linha: " << std::endl;
        std::cin >> linhaJogada;
        std::cout << "Jogador digite uma coluna: " << std::endl;
        std::cin >> colunaJogada;
        
        // Verifica se a linha e a coluna estao dentro do tabuleiro
        if (turnoJogador == 1)
        {
            tabuleiro[linhaJogada][colunaJogada] = 'X';

            turnoJogador = 2;
        }
        else
        {
            tabuleiro[linhaJogada][colunaJogada] = 'O';

            turnoJogador = 1;
        }
        rodada++;
    }
}

void menuInicial()
{

    std::string nomeDoJogador1 = "";	// Nome do jogador 1
    std::string nomeDoJogador2 = "";	// Nome do jogador 2 

    int opcao = 0;

    while (opcao != 4)
    {
        std::cout << "Jogo da Velha" << std::endl;
        std::cout << "1 - Jogar" << std::endl;
        std::cout << "2 - Ver Ranking" << std::endl;
        std::cout << "3 - Ver Regras e Instrucoes" << std::endl;
        std::cout << "4 - Sair" << std::endl;
        std::cin >> opcao;

        switch (opcao)
        {
        #include <string> // Include the header file for std::string

                case 1:
                    std::cout << "VocE escolheu a opcao JOGAR" << std::endl;

                    std::cout << "Jogador numero 1: " << std::endl;
                    std::cin >> nomeDoJogador1;
                    std::cout << "Jogador numero 2: " << std::endl;
                    std::cin >> nomeDoJogador2;
                    jogar(nomeDoJogador1, nomeDoJogador2);
                    break;

        case 2:
            std::cout << "Ver Ranking" << std::endl;
            break;

        case 3:
            std::cout << "Ver Regras e Instrucoes" << std::endl;
            break;

        case 4:
            std::cout << "Sair" << std::endl;
            break;

        default:
            std::cout << "Opcao Invalida" << std::endl;
            break;
        }
    }
}

int main()
{
    int opcao;

    menuInicial();

    return 0;
}