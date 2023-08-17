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
    string palavras[3] = {"abacaxi", "manga", "morango"};
    int indiceAleatorio = rand() % 3; // Gera um índice aleatório de 0 a 2

    return palavras[indiceAleatorio]; // Retorna a palavra aleatória
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra)
{
    int cont = 0;
    string palavraComMascara;
    palavra = "";

    while (cont < tamanhoDaPalavra)
    {
        palavraComMascara += "_";
        cont++;
    }
    return palavraComMascara;
}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas, string mensagem)
{
    // cout << "A palavra secreta eh >>> " << palavra << " - (tamanho: " << tamanhoDaPalavra << ")"; // Mostra a palavra secreta
    cout << mensagem << endl;
    cout << "Palavra: " << palavraComMascara << " => (tamanho: " << tamanhoDaPalavra << ")";
    cout << "\nTentativas restantes: " << tentativasRestantes;

    // Exibe as letras arriscadas
    // int cont;
    cout << "\nLetras arriscadas: ";
    for (std::__cxx11::basic_string<char>::size_type cont = 0; cont < letrasJaArriscadas.size(); cont++)
    {
        cout << letrasJaArriscadas[cont] << ", ";
    }
}

// Função para jogar sozinho
void jogarSozinho()
{
    string palavra = retornaPalavraAleatoria(); // Obtém uma palavra aleatória

    // tamanho a ser adivinhada
    int tamanhoDaPalavra = palavra.size();

    // Palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    // Variáveis gerais
    int tentativas = 0, maximoDeTentativas = tamanhoDaPalavra; // Número de tentativas igual ao tamanho da palavra
    int cont;                                                  // Percorrer a palavra
    char letra;                                                // letra arriscad a pelo usuário
    string letrasJaArriscadas;                                 // vetor de char
    string mensagem = "==== BENVINDO AO JOGO DA FORCA ====";   // Mensagem para o usuário e o feedback do jogador
    bool jaDigitouLetra = false, acertouLetra = false;         // Auxiliar para saber se a letra já foi digitada

    while (maximoDeTentativas - tentativas > 0)
    {
        limpaTela();

        // Exibe o estatus atual do jogo
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas, letrasJaArriscadas, mensagem);

        // Lê um palpite
        cout << "\nDigite uma letra: ";
        cin >> letra;

        // Percorre as letras já arriscadas
        for (cont = 0; cont < tentativas; cont++)
        {
            // Se a letra for encontrada
            if (letrasJaArriscadas[cont] == letra)
            {
                mensagem = "\nEssa letra jA foi digitada!\n";
                // indica com a variável booleana
                jaDigitouLetra = true;
            }
        }

        if (jaDigitouLetra == false)
        {
            letrasJaArriscadas += letra;

            // Percorre a palavra real e se a letra existir muda a plavvarComMascara
            for (cont = 0; cont < tamanhoDaPalavra; cont++)
            {
                // se a letra existir na palavra escondida
                if (palavra[cont] == letra)
                {
                    // faz aquela letra aparecer na palavraComMascara
                    palavraComMascara[cont] = palavra[cont];

                    acertouLetra = true;
                }
            }

            if (acertouLetra == false)
            {
                mensagem = "\nVocE ERROU uma letra\n";
            }
            else
            {
                mensagem = "\nVocE acertou uma Letra!\n";
                acertouLetra = false;
            }

            // Aumenta uma tentativa realizada
            tentativas++;
        }

        //reinicia auxiliares
        jaDigitouLetra = false;
        acertouLetra = false;
    }

    if (palavra == palavraComMascara)
    {
        limpaTela();
        cout << "\n====== PARABENS =======\nVocE Venceu!!!";
    }
    else
    {
        limpaTela();
        cout << "Acabaram suas tentativas :-(\nVocE Perdeu!!!";
    }
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
