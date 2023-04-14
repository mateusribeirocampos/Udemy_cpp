#include <stdio.h>

int a, b, c;
int DigitaValores()
{

    printf("\nDigite 3 algoritmos para saber se forma um triangulo equilatero a2 = b2 + c2\n");
    fflush(stdin);
    scanf("%i %i %i", &a, &b, &c);
}

int CondicaoTrianguloEquilatero()
{
    if ((a == b) && (b == c))
    {
        printf("\nOs lados do triangulo sao a: %i, b: %i e c: %i sao iguais,\nEntao eh um triangulo equilatero\n", a, b, c);
    }
    else if ((a == b) || (b == c) || (a == c))
    {
        printf("\nApenas dois lados do triangulo a: %i, b: %i e c: %i sao difentes,\nEntao eh um triangulo isoceles\n", a, b, c);
    }
    else
    {
        printf("\nNenhum dos lados  a: %i, b: %i e c: %i do triangulo sao iguais,\nEntao eh um triangulo escaleno\n", a, b, c);
    }
}
int main()
{
    DigitaValores();
    CondicaoTrianguloEquilatero();

    system("pause");
    return 0;
}
