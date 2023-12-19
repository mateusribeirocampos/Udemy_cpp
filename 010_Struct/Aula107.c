#include <stdio.h>
#include <string.h>

typedef struct Data // Define uma nova estrutura de dados com o nome "Data"
{
    int dia; // Define um campo "dia" do tipo inteiro na estrutura
    int mes; // Define um campo "mes" do tipo inteiro na estrutura
    int ano; // Define um campo "ano" do tipo inteiro na estrutura

} Data; // Define um alias para a estrutura de dados, facilitando sua declaração posteriormente

struct Aluno // Define uma nova estrutura de dados com o nome "Aluno"
{
    int id; // Define um campo "id" do tipo inteiro na estrutura
    Data nascimento; // Define um campo "nascimento" do tipo "Data" na estrutura
    char nome[20]; // Define um campo "nome" do tipo array de caracteres com tamanho 20 na estrutura
};

int main()
{

    // criando um aluno
    struct Aluno aluno1; // Cria uma variável do tipo "Aluno" chamada "aluno1"

    // Modificar valores
    aluno1.id = 15; // Atribui o valor 15 ao campo "id" da variável "aluno1"
    aluno1.nascimento.ano = 2024; // Atribui o valor 1981 ao campo "ano" da variável "nascimento" dentro da variável "aluno1"
    aluno1.nascimento.mes = 05; // Atribui o valor 05 ao campo "mes" da variável "nascimento" dentro da variável "aluno1"
    aluno1.nascimento.dia = 17; // Atribui o valor 25 ao campo "dia" da variável "nascimento" dentro da variável "aluno1"
    strcpy(aluno1.nome, "Isadora Campos"); // Copia a string "Mateus Campos" para o campo "nome" da variável "aluno1" usando a função "strcpy"

    printf("Nome: %s e ID: %d", aluno1.nome, aluno1.id); // Imprime na tela o valor dos campos "nome" e "id" da variável "aluno1"

    printf("\nNascido em: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano); // Imprime na tela o valor dos campos "dia", "mes" e "ano" da variável "nascimento" dentro da variável "aluno1"

    return 0; // Retorna o valor 0 para indicar que o programa terminou sem erros
}
