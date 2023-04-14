#include <stdio.h>

int valor, i, aux = 0;

int DigitaValor()
{
    printf("\nDigite um numero para verificar se ele eh um numero primo: ");
    scanf("%d", &valor);
    return valor;
}

int VerificarNumeroPrimo()
{
    for (i = 1; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            aux++;
        }
        //Exibe o resto da divisão do valor fornecido com o valores do loop do for
        printf("\nO resto da divisao de %d por %d = %d", valor, i, valor%i);
    }
    //verifica os valores que obtiveram 0 proveniente da divisão dele com 1 e com ele mesmo!
    if(aux == 2)
    {
        printf("\nO numero %d eh um numero primo\nPorque tem resto 0 em %d ocasioes\nNo resto da divisao por 1 e por ele mesmo...", valor, aux);
    } 
    else if(aux == 0) 
    {
        printf("\nO Numero %d nao eh um numero primo\nPorque apresenta resto 0 em %d ocasioes", valor, aux);
    }
    else
    {
        printf("\nO numero %d nao eh um numero primo\nPorque tem resto 0 em mais de duas ocasioes\n", valor);
        printf("Os valores pelos quais o numero %d eh divisivel sao:\n", valor);
        for (i = 1; i <= valor; i++)
        {
            if (valor % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}

int main()
{
    DigitaValor();
    VerificarNumeroPrimo();
    getchar();
    return 0;
}
