#include <stdio.h>
#include <stdlib.h>

void limpaTela() {
    system("cls");
}


int main() {
    int a;

    printf("Digite um valor para 'a': ");
    scanf("%d", &a);

    limpaTela();
    printf("Voce digitou: %d", a);

    return 0;
}