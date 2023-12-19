#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // cursor que irá percorrer cada letra

    int c;
    char conteudoTexto[255];
    // Contador
    int cont = 0;

    // Arquivo a ser lido
    FILE *file;

    // Abre o arquivo no diretório escolhido
    file = fopen("Texto.txt", "r");

    if (file)
    {
        // Enquanto encontrar letras (até o fim do arquivo) imprimir
        while ((c = getc(file)) != EOF) // EOF = End Of File
        {
            printf("%c", c);

            // Vetor de char recebe a letra atual
            conteudoTexto[cont] = c;

            // aumenta a contagem de letras
            cont++;
        }

        fclose(file);
    }
    printf("\n");
    // Imprimindo conteúdo lido
    for (cont = 0; cont < strlen(conteudoTexto) - 2; cont++)
    {
        printf("%c", conteudoTexto[cont]);
    }

    return 0;
}
