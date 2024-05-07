#include <iostream>
#define TAM 3

void menuInicial();

void limparTela()
{
	std::system("cls");
}

void preencheTabuleiro(char tabuleiro[TAM][TAM])
{
	int linha, coluna;
	for (linha = 0; linha < TAM; linha++)
	{
		for (coluna = 0; coluna < TAM; coluna++)
		{
			tabuleiro[linha][coluna] = '-';
		}
	}
}

void exibeTabuleiro(char tabuleiro[TAM][TAM])
{
	int linha, coluna;
	for (linha = 0; linha < TAM; linha++)
	{
		for (coluna = 0; coluna < TAM; coluna++)
		{
			std::cout << tabuleiro[linha][coluna];
		}
		std::cout << std::endl;
	}
}

void jogar()
{
	char tabuleiro[TAM][TAM];
	int linhaJogada, colunaJogada;
	int turndoDoJogador = 1;
	int rodada;

	preencheTabuleiro(tabuleiro);

	while (rodada < 9)
	{

		exibeTabuleiro(tabuleiro);

		std::cout << "Rodada: " << rodada << std::endl;
		std::cout << "Jogador, digite o numero da linha: ";
		std::cin >> linhaJogada;
		std::cout << "Jogador, digite o numero da coluna: ";
		std::cin >> colunaJogada;

		limparTela();

		if (turndoDoJogador == 1)
		{
			tabuleiro[linhaJogada][colunaJogada] = 'X';
			turndoDoJogador = 2;
		}
		else
		{
			tabuleiro[linhaJogada][colunaJogada] = 'O';
			turndoDoJogador = 1;
		}
		rodada++;
	}
	int opcaoDoFimJogo;
	std::cout << "Fim do Jogo!" << std::endl;
	while (opcaoDoFimJogo != 3)
	{
		std::cout << "1 - Jogar novamente" << std::endl;
		std::cout << "2 - Voltar ao menu inicial" << std::endl;
		std::cout << "3 - Sair" << std::endl;
		std::cin >> opcaoDoFimJogo;
		std::cout << ">> ";

		limparTela();

		switch (opcaoDoFimJogo)
		{
		case 1:
			jogar();
			break;
		case 2:
			menuInicial();
			break;
		case 3:
			std::cout << "Saindo do jogo..." << std::endl;
			std::exit(0);
			break;
		default:
			if (opcaoDoFimJogo != 3)
			{
				std::cout << "Opcao invalida!!!" << std::endl;
			}
			break;
		}
	}
}

void menuInicial()
{
	int opcao;

	while (opcao != 4)
	{
		std::cout << "1 - Jogar" << std::endl;
		std::cout << "2 - Informacoes sobre o Jogo" << std::endl;
		std::cout << "3 - Ranking dos jogadores" << std::endl;
		std::cout << "4 - Sair" << std::endl;
		std::cin >> opcao;
		std::cout << ">> ";

		limparTela();

		switch (opcao)
		{
		case 1:
			std::cout << "Vamos Jogar!!!" << std::endl;
			jogar();
			break;

		case 2:
			std::cout << "Informacoes sobre o Jogo!!!" << std::endl;
			break;

		case 3:
			std::cout << "Ranking dos Jogadores" << std::endl;
			break;

		case 4:
			std::cout << "Saindo do jogo..." << std::endl;
			std::exit(0);
			break;

		default:
			if (opcao != 0)
			{
				std::cout << "Opcao invalida!!!" << std::endl;
			}
			break;
		}
	}
}

int main()
{
	menuInicial();

	return 0;
}
