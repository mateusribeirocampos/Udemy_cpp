#include <stdio.h>
#include <string.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;

} Data;

struct Aluno
{
    int id;
    Data nascimento;
    char nome[20];
};

int main()
{

    // criando um aluno
    struct Aluno aluno1;

    // Modificar valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 2024;
    aluno1.nascimento.mes = 5;
    aluno1.nascimento.dia = 17;
    strcpy (aluno1.nome, "Isadora Campos");

    printf("Nome: %s e ID: %d", aluno1.nome, aluno1.id);

    printf("\nNascido em: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}