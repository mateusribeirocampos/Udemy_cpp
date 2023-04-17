#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano()
{
    return true;
}

int main()
{
    bool variavelBool;

    variavelBool = retornaBooleano();
    printf("%d", variavelBool);

    if(variavelBool) {
        printf(" - Eh verdadeiro");
    } else {
        printf(" - Eh falso");
    }

    return 0;
}