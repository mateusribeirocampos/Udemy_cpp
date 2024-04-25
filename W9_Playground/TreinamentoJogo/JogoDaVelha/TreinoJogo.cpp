#include <iostream>
#include <string>
#include <vector>
#define tam 3

void limpaTela()
{
    system("cls");
}

void jogar()
{
    char tabuleiro[tam][tam];
    int linha, coluna;

    for (int linha = 0; linha < tam; linha++)
    {
        for(int coluna = 0; coluna < tam; coluna++)
        {
            tabuleiro[linha][coluna] = '-';
        }
    }

    for (int linha = 0; linha < tam; linha++)
    {
        for(int coluna = 0; coluna < tam; coluna++)
        {
            std::cout << tabuleiro[linha][coluna] << "";
        }
        std::cout << std::endl;
    }
}

void menuInicial()
{
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
        case 1:
            std::cout << "VocE escolheu a opcao JOGAR" << std::endl;
            jogar();
        case 2:
            std::cout << "Ver Ranking" << std::endl;
            break;

        case 3:
            std::cout << "Ver Regras e Instrucoes" << std::endl;
            break;

        case 4:
            std::cout << "AtE logo!" << std::endl;
            break;

        default:
            if (opcao != 4)
            {
                std::cout << "Opcao Invalida" << std::endl;
            }
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