#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
char c, texto[212], refazer;
void cabecalho(void);

int main(void)
{

    cabecalho();
    char refazer;
    do
    {
        c = getch();
        int val1, val2;
        printf("\n\nDigite o primeiro valor: ");
        scanf("\n%d", &val1);
        printf("\n\nDigite o segundo valor: ");
        scanf("\n%d", &val2);
        imprimeContagem(val1, val2);

        printf("\n\nGostaria de refazer?(s/n)\n");
        setbuf(stdin, NULL);
        scanf("%c", &refazer);
    } while (refazer == 's');
    printf("Aperte Enter novamente:");
    system("pause");
    return 0;
}

//***************************************

int imprimeContagem(int val1, int val2)
{
    for (int i = val1; i <= val2; i += 2)
    {
        printf(" %d ", i);
    }
}

//***************************************
void cabecalho(void)
{

    printf("\n******************************\n");
    printf("\n* LINGUAGEM C *\n");
    printf("\n* CONTAGEM *\n");
    printf("\n******************************\n\n");
    printf("\n\nPRESSIONE ENTER PARA INICIAR");

    return;
}
