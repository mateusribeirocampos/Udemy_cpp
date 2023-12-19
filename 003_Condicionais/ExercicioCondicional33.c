/*Crie um algoritmo que leia 3 notas e calcule a media entrea elas.
Se o valor for maior que 7 informe que o aluno foi aprovado,
senao foi reprovado*/
#include <stdio.h>
#include <stdlib.h>

float nota1, nota2, nota3, media;
int DigiteNotas()
{
    printf("Digite as suas 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
}

int MediaNota()
{
    media = (nota1 + nota2 + nota3) / 3;
    return media;
}

int CondicaoDoAluno()
{
    if (media >= 7.0)
    {
        printf("Sua media foi de %.2f\n", media);
        printf("PARABENS, Aluno aprovado!!! =)\n");
    }
    else
    {
        printf("Sua media foi de %.2f\n", media);
        printf("Aluno reprovado =(\n");
    }
}

void ImprimirInformacao ()
{
    printf("==============================================\n");
    printf("Aluno com nota maior que 7.0, aluno aprovado\n");
    printf("Aluno com nota abaixo de 6.9, aluno reprovado.\n");
    printf("==============================================\n");
}

int main()
{
    DigiteNotas();
    MediaNota();
    CondicaoDoAluno();
    ImprimirInformacao();
    return 0;
}