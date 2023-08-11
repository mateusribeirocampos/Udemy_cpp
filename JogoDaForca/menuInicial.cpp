#include <stdio.h>
#include <stdlib.h>
#include <string> // Inclusão da biblioteca para usar strings
#include <iostream>
#include <time.h>

using namespace std;

// Função para limpar a tela do console
void limpaTela()
{
    system("cls");
}

// Função para retornar uma palavra aleatória da lista
string retornaPalavraAleatoria()
{
    // Vetor com palavras disponíveis
    string palavras[3] = {"Abacaxi", "Manga", "Morango"};
    int indiceAleatorio = rand() % 3; // Gera um índice aleatório de 0 a 2

    return palavras[indiceAleatorio]; // Retorna a palavra aleatória
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra)
{
    int cont = 0;
    string palavraComMascara;

    while (cont < tamanhoDaPalavra)
    {
        palavraComMascara += " _ ";
        cont++;
    }
    return palavraComMascara;
}

// Função para jogar sozinho
void jogarSozinho()
{
    string palavra = retornaPalavraAleatoria(); // Obtém uma palavra aleatória

    // tamanho a ser adivinhada
    int tamanhoDaPalavra = palavra.size();

    // Palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    cout << "A palavra secreta eh >>> " << palavra << " - (tamanho: " << tamanhoDaPalavra << ")"; // Mostra a palavra secreta
    cout << "\nMascara: " << palavraComMascara;
}

// Função para exibir o menu inicial
void menuInicial()
{
    int opcao = 0;

    while (opcao < 1 || opcao > 3)
    {
        limpaTela();
        cout << "Bem-vindo ao JOGO";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER: ";
        cin >> opcao; // Lê a opção escolhida

        switch (opcao)
        {
        case 1:
            cout << "JOGO INICIADO" << endl;
            cout << "\n";
            jogarSozinho(); // Inicia o jogo
            break;
        case 2:
            cout << "Informacoes do jogo"; // Exibe informações sobre o jogo
            break;
        case 3:
            cout << " <==== Ate mais ====> ";
            exit(0); // Sai do programa
            break;
        }
    }
}

int main()
{
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    menuInicial(); // Exibe o menu inicial
    return 0;
}
