#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra
{
    int ordem;
    char letra;
    char texto[255]; // Array de char ou String
};

int main()
{

    // Criar uma palavra
    struct palavra primeiraPalavra;

    // Modificando os campos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.texto, "Palavrinha");

    // Mostrando valores do Struct
    printf("Ordem: %d", primeiraPalavra.ordem);
    printf("\nPrimeira letra: %c", primeiraPalavra.letra);
    printf("\nPalavra: %s", primeiraPalavra.texto);

    // fazendo uma lista de struct
    struct palavra listaDePalavra[3];

    listaDePalavra[0].ordem = 0;
    listaDePalavra[1].ordem = 1;
    listaDePalavra[2].ordem = 2;
    listaDePalavra[0].letra = 'd';
    listaDePalavra[1].letra = 'l';
    listaDePalavra[2].letra = 'b';
    strcpy(listaDePalavra[0].texto, "Dahora");
    strcpy(listaDePalavra[1].texto, "Legal");
    strcpy(listaDePalavra[2].texto, "Bacana");

    for (int i = 0; i < 3; i++)
    {
        printf("\nOrdem: %d, Primeira Letra: %c, Palavara: %s", listaDePalavra[i].ordem, listaDePalavra[i].letra, listaDePalavra[i].texto);
    }
    

    return 0;
}