#include <stdio.h>
#include <locale.h>

int main(){
    int lado1, lado2, lado3, s1, s2, s3;

    printf("Entre com o tamanho do triangulo");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    ///Calcula o quadrado dos lados
    s1 = lado1 * lado1;
    s2 = lado2 * lado2;
    s3 = lado3 * lado3;

    ///testa a condi��o para um tri�ngulo reto

    if(lado1 > 0 && lado2 > 0 && lado3 > 0){
        printf("Triangulo reto!\n");
    } else {
        printf("Nao pode ser um triangulo reto!\n");
    }

    return 0;
}
