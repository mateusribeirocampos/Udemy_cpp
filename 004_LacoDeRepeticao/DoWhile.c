#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 10;

    /*// contando até 10
    while (a <= 10)
    {
        // vai imprimir 1
        printf("%d\n", a);

        // imcremento
        a = a + 1;
        a++;
    }*/

    do
    {
        printf("\t%d\n", a);
        a--;
    } while (a >=10);

    // contagem regressiva
    /*while (b >= 1)
    {
        // vai imprimir 1
        printf("%d\n", b);

        // imcremento
        b = b - 1;
        b--;
    }*/

    return 0;
}