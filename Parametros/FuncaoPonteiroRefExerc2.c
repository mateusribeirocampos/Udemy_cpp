/*O ponteiro é utilizado na função somaArray para receber um endereço de memória que aponta para o primeiro elemento do array de inteiros. Na declaração da função, o parâmetro array é um ponteiro para int (int *array), ou seja, ele recebe um endereço de memória que aponta para um valor do tipo int.

Ao passarmos o array array como argumento para a função somaArray, o que está sendo passado na verdade é o endereço de memória do primeiro elemento do array. Dentro da função, podemos acessar os elementos do array usando o operador de indexação [] e o ponteiro array.

Por exemplo, na linha soma += array[i];, estamos acessando o elemento de índice i do array apontado por array. O uso do ponteiro permite que a função manipule os elementos do array sem precisar fazer uma cópia completa do array, o que economiza memória e processamento.*/

#include <stdio.h>

// Função para somar os elementos de um array
int somaArray(int *array, int tamanho)
{
    int soma = 0;
    // Loop para somar os elementos do array
    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];  // Adiciona o elemento atual à soma
        printf("Soma: %d\n", soma);  // Imprime a soma parcial
    }
    return soma;  // Retorna a soma total
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};  // Declara e inicializa o array
    int tamanho = 5;  // Armazena o tamanho do array
    int soma = somaArray(array, tamanho);  // Chama a função para somar o array
    printf("Soma: %d\n", soma);  // Imprime a soma total
    return 0;
}

