#include <iostream>
#define tam 3

void menuInicial();

void limpaTela() { system("cls"); }

void preencheTabuleiro(char tabuleiro[tam][tam])
{

  int linhas, colunas;
  for (int linhas = 0; linhas < tam; linhas++)
  {
    for (int colunas = 0; colunas < tam; colunas++)
    {
      tabuleiro[linhas][colunas] = '-';
    }
  }
}

void exibeTabuleiro(char tabuleiro[tam][tam])
{
  for (int linhas = 0; linhas < tam; linhas++)
  {
    for (int colunas = 0; colunas < tam; colunas++)
    {
      std::cout << tabuleiro[linhas][colunas];
    }
    std::cout << std::endl;
  }
}

void jogar()
{
  char tabuleiro[tam][tam]; // Matriz do tabuleiro
  int linhaJogada, colunaJogada;
  int rodada;
  int turnoDoJogador = 1;

  preencheTabuleiro(tabuleiro);

  while (rodada < 9)
  {
    exibeTabuleiro(tabuleiro);
    std::cout << "Jogador " << turnoDoJogador << " faca sua jogada" << std::endl;
    std::cout << "Linha: ";
    std::cin >> linhaJogada;
    std::cout << "Coluna: ";
    std::cin >> colunaJogada;

    if (tabuleiro[linhaJogada][colunaJogada] == '-')
    {
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
    }
    else
    {
      std::cout << "Jogada Invalida" << std::endl;
    }
  rodada++;
  std::cout << "Rodada: " << rodada << std::endl;
  }
  
  std::cout << "Fim do jogo!!!" << std::endl;
  int opcaoFimDoJogo;
  while (opcaoFimDoJogo != 3)
  {
    std::cout << "---------------------------" << std::endl;
    std::cout << "1 - Jogar novamente" << std::endl;
    std::cout << "2 - Voltar ao menu inicial" << std::endl;
    std::cout << "3 - Sair" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << ">> ";
    std::cin >> opcaoFimDoJogo;

    limpaTela();

    switch (opcaoFimDoJogo)
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
    default:
      if (opcaoFimDoJogo != 0)
      {
        std::cout << "Opcao invalida!" << std::endl;
      }
      break;
    }
  }
}

void menuInicial()
{
  int opcao = 0;

  while (opcao != 4)
  {
    std::cout << "---------------------------" << std::endl;
    std::cout << "Jogo da Velha" << std::endl;
    std::cout << "1 - Jogar" << std::endl;
    std::cout << "2 - Ver Ranking" << std::endl;
    std::cout << "3 - Ver Regras e Instrucoes" << std::endl;
    std::cout << "4 - Sair" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << ">> ";
    std::cin >> opcao;

    limpaTela();

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
      std::cout << "Saindo do jogo...." << std::endl;
      std::exit(0);
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

  menuInicial();

  return 0;
}
