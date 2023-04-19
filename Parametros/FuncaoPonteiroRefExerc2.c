/*O ponteiro é utilizado na função somaArray para receber um endereço de memória que aponta para o primeiro elemento do array de inteiros. Na declaração da função, o parâmetro array é um ponteiro para int (int *array), ou seja, ele recebe um endereço de memória que aponta para um valor do tipo int.

Ao passarmos o array array como argumento para a função somaArray, o que está sendo passado na verdade é o endereço de memória do primeiro elemento do array. Dentro da função, podemos acessar os elementos do array usando o operador de indexação [] e o ponteiro array.

Por exemplo, na linha soma += array[i];, estamos acessando o elemento de índice i do array apontado por array. O uso do ponteiro permite que a função manipule os elementos do array sem precisar fazer uma cópia completa do array, o que economiza memória e processamento.*/

#include <stdio.h>

int somaArray(int *array, int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];
    }
    return soma;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int soma = somaArray(array, tamanho);
    printf("Soma: %d\n", soma);
    return 0;
}
