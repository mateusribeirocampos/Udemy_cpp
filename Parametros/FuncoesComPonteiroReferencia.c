#include <stdio.h>
#include <stdlib.h>

int retornaComMaisDez(int numero)
{
    return numero + 10;
}

// não precisa retornar nada vai direto no endereço da memória
void aumentaDez(int *numero)
{
    *numero = *numero + 10;
}

int main()
{

    // Definir variáveis
    int a = 5;

    // mostrar o valor de a
    printf("%d \n", a);

    // Aumenta 10
    // a variável a recebeu o valor da função retornaMaisDez
    a = retornaComMaisDez(a);

    // mostrar o valor de a
    printf("%d \n", a);

    // com uso de ponteiros elimina a nova atribuição na variável
    // função que aumenta 10 diretamente
    aumentaDez(&a);

    // mostrar o valor de a
    printf("%d \n", a);

    return 0;
}