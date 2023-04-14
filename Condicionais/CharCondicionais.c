//tabela ASCII

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char letra;
    printf("\nDigite a letra que deseja saber o numero dela na tabela ASCII: ");
    fflush(stdin);
    scanf("%c", &letra);

    //if (letra == 'x')
    //{
    //    printf("\nA letra eh x: ");
    //}

    printf("\ncodigo da letra = %d", letra);

    //Comparando Codigo ASCII
    //if(letra == 120){
    //    printf("\nA letra eh x.");
    //}

    return 0;
}