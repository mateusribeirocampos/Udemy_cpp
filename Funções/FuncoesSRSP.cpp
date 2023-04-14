#include <stdio.h>
#include <stdlib.h>

void desenhaBorda()
{
    printf("|===============================| \n");
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        desenhaBorda();
        printf("|HELLO                          |\n");
        desenhaBorda();
        desenhaBorda();
        printf("|     HELLO                     |\n");
        desenhaBorda();
        desenhaBorda();
        printf("|            HELLO              |\n");
        desenhaBorda();
        desenhaBorda();
        printf("|                  HELLO        |\n");
        desenhaBorda();
        desenhaBorda();
        printf("|                         HELLO |\n");
        desenhaBorda();
    }

    return 0;
}