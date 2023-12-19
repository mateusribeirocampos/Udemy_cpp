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

    // int cont;
    //  Exibe as letras arriscadas
    string::size_type cont;
    cout << "\nLetras arriscadas: ";
    for (cont = 0; cont < letrasJaArriscadas.size(); cont++)
    {
        cout << letrasJaArriscadas[cont] << ", ";
    }
}

// Função para jogar sozinho
int jogar(int numeroDeJogadores)
{
    // palavra a ser adivinhada
    string palavra;

    // confere o número de jogadores
    if (numeroDeJogadores == 1)
    {
        // palavra a ser adivinhada
        palavra = retornaPalavraAleatoria();
    }
    else
    {
        cout << "\nDigite uma palavra: \n>>> ";
        cin >> palavra;
    }

    // tamanho a ser adivinhada
    int tamanhoDaPalavra = palavra.size();

    // Palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    // Variáveis gerais
    int tentativas = 0, maximoDeTentativas = 7;              // Número de tentativas igual ao tamanho da palavra
    int cont;                                                // Percorrer a palavra
    char letra;                                              // letra arriscad a pelo usuário
    int opcao;                                               // Opçoes finais
    string letrasJaArriscadas;                               // vetor de char
    string mensagem = "==== BENVINDO AO JOGO DA FORCA ===="; // Mensagem para o usuário e o feedback do jogador
    string palavraArriscada;                                 // tentativa de arriscar a palavra completa
    bool jaDigitouLetra = false, acertouLetra = false;       // Auxiliar para saber se a letra já foi digitada

    while (palavra != palavraComMascara && maximoDeTentativas - tentativas > 0)
    {
        limpaTela();

        // Exibe o estatus atual do jogo
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas, letrasJaArriscadas, mensagem);

        // Lê um palpite
        //cout << "\n\nOu digite 1 para arricar a palavra\nObs: Se errar a palavra inteira perde o jogo!";
        cout << "\nDigite uma letra [Ou digite 1 para arriscar a palavra!]\n>>> ";
        cin >> letra;

        // Se digitar 1 deixa o usuário arriscar a palavra inteira
        if (letra == '1')
        {
            cin >> palavraArriscada;
            if (palavraArriscada == palavra)
            {
                palavraComMascara = palavraArriscada;
            }
            else
            {
                tentativas = maximoDeTentativas;
            }
        }

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
            // incrementa as letras transformanda elas em minúsculas já arriscadas
            letrasJaArriscadas += tolower(letra);

            // Percorre a palavra real e se a letra existir muda a plavvarComMascara
            for (cont = 0; cont < tamanhoDaPalavra; cont++)
            {
                // se a letra existir na palavra escondida
                if (palavra[cont] == tolower(letra))
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

        // reinicia auxiliares
        jaDigitouLetra = false;
        acertouLetra = false;
    }

    if (palavra == palavraComMascara)
    {
        limpaTela();
        cout << "\n====== PARABENS =======\nVocE Venceu!!!";
        cout << "\nDeseja reiniciar?";
        cout << "\n1 - sim";
        cout << "\n2 - nao";
        cout << "\nEscolha uma opcao e tecle ENTER: ";
        cin >> opcao;
        return opcao;
    }
    else
    {
        limpaTela();
        cout << "Acabaram suas tentativas :-(\nVocE Perdeu!!!";
        cout << "\nDeseja reiniciar?";
        cout << "\n1 - sim";
        cout << "\n2 - nao";
        cout << "\nEscolha uma opcao e tecle ENTER: ";
        cin >> opcao;
        return opcao;
    }
}

// Função para exibir o menu inicial
void menuInicial()
{
    int opcao = 0;

    while (opcao < 1 || opcao > 4)
    {
        limpaTela();
        cout << "Bem-vindo ao JOGO";
        cout << "\n1 - Jogar sozinho";
        cout << "\n2 - Jogar em dupla";
        cout << "\n3 - Informacoes do jogo";
        cout << "\n4 - Sair do jogo";
        cout << "\nEscolha uma opcao e tecle ENTER: ";
        cin >> opcao; // Lê a opção escolhida

        switch (opcao)
        {
        case 1:
            cout << "\nJOGO INICIADO" << endl;
            // Inicia o jogo
            if (jogar(1) == 1)
            {
                menuInicial();
            };
            break;
        case 2:
            cout << "\nJOGO INICIADO" << endl;
            // Inicia o jogo
            if (jogar(2) == 1)
            {
                menuInicial();
            };
            break;
        case 3:
            limpaTela();
            cout << "Informacoes do jogo\n"; // Exibe informações sobre o jogo
            cout << "____________________________________________________\n";
            cout << "|                   JOGO DA FORCA                   |\n";
            cout << "| Desenvolvido por Mateus Campos em 2023            |\n";
            cout << "|                                                   |\n";
            cout << "| Jogo multiplayer da forca.                        |\n";
            cout << "|                                                   |\n";
            cout << "| Exite a opcao de jogar sozinho e jogar com amigo. |\n";
            cout << "| Na opcao de jogar sozinho o computador fornece a  |\n";
            cout << "|palavra para vocE acertar.                         |\n";
            cout << "| Na opcao jogar com mais uma pessoa eh a pessoa que|\n";
            cout << "|fornece a palavra para vocE acertar!               |\n";
            cout << "|                                                   |\n";
            cout << "|                BOA SORTE e BOM JOGO!!!            |\n";
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
        case 4:
            cout << " <==== Ate mais ====> ";
            exit(0); // Sai do programa
            break;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL)); // Inicializa o gerador de números aleatórios

    menuInicial(); // Exibe o menu inicial
    return 0;
}