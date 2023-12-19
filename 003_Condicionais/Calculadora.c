#include <stdio.h>
#include <stdlib.h>

double valor1, valor2, soma, subtrair, divide, multiplica;
char opcao;

void LeiaValores()
{
    printf("\nDigite o primeiro valor: ");
    scanf("%lf", &valor1);
    printf("\nDigite o segundo valor: ");
    scanf("%lf", &valor2);
}

int CalculaValores(char opcao)
{
    do
    {
        printf("\nDigite os operadores para operacao matematica (+, -, /, *): ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case '+':
            soma = valor1 + valor2;
            printf("O valor da soma: %.2lf\n", soma);
            break;
        case '-':
            subtrair = valor1 - valor2;
            printf("O valor da subtração: %.2lf\n", subtrair);
            break;
        case '/':
            if (valor2 == 0)
            {
                printf("\nValues equal to 0 will give a error");
                return opcao;
            }
            else
            {
                divide = valor1 / valor2;
                printf("O valor da divisao: %.2lf\n", divide);
            }
            break;
        case '*':
            multiplica = valor1 * valor2;
            printf("O valor da multiplicacao: %.2lf\n", multiplica);
            break;
        default:
            printf("Operador invalido\ndigite:\n\t'+' Para somar\n\t'-' Para subtrair\n\t'/' Para dividir\n\t'*' Para multiplicar");
            continue;
        }
    } while (opcao != '+' && opcao != '-' && opcao != '/' && opcao != '*');
    return opcao;
}

int main()
{
    LeiaValores();
    CalculaValores(opcao);
    system("pause");
    return 0;
}