#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //reponsável por alimentar o rand de forma diferent
    srand((unsigned)time(NULL));

    //variável que rece o resto da divisão do núero por 3 (aleatório entre 0 e 2)
    int aleatorio = rand() % 3;
    printf("aleatorio entre 0 e 2: %d\n", aleatorio);

    //Variável que recebe o resto da divisão do npumero por 5 (aleatório entre 1 e 5)
    int aletorio_segundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("aleatorio entre 1 e 5: %d\n", aletorio_segundo);

    getchar();
    return 0;
}