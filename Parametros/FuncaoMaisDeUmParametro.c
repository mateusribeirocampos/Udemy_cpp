#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int num1, int num2) {
    printf("\n A soma entre %d e %d eh %d", num1, num2, num1 + num2);
}

int retornaSoma(int num1, int num2) {
    return num1 + num2;
}


int main () {
    int a = 5;
    int b = 7;

    //função que mostra a soma
    mostraSoma(a,b);
    mostraSoma(a,90);

    printf("\n A soma entre %d e %d eh %d", a, b, retornaSoma(a,b));

    return 0;
}