#include <stdio.h>

/* Esta é a definição da função imprimeVetor(), que recebe como parâmetro um 
   ponteiro para inteiro int *vetor e o tamanho do vetor. O ponteiro vetor 
   aponta para o primeiro elemento de um vetor de inteiros. Como a função não 
   retorna nenhum valor (void), ela é considerada uma função do tipo procedimento.*/
void imprimeVetor(int *vetor, int tamanho) {
    /* Este loop for percorre os elementos do vetor vetor e imprime na tela o valor
       de cada elemento. A variável i é inicializada com 0 e é incrementada a cada 
       iteração até que ela atinja o valor tamanho (não inclusivo). Dentro do loop, 
       a função printf() é usada para imprimir uma mensagem no console, que contém 
       o valor de i e o valor do elemento do vetor vetor correspondente a i.*/
    for (int i = 0; i < tamanho; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    printf("\n");
}

/* Esta é a definição da função modificaVetor(), que recebe como parâmetro um 
   ponteiro para inteiro int *vetor e o tamanho do vetor. O ponteiro vetor 
   aponta para o primeiro elemento de um vetor de inteiros. A função incrementa 
   em 1 o valor de cada elemento do vetor.*/
void modificaVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = vetor[i] + 1;
    }
}

/* A função principal do programa*/
int main() {
    // Inicializando vetor
    /* Um vetor de inteiros v é declarado e inicializado com os valores 1, 2 e 3.*/
    int v[3] = {1, 2, 3};

    // Imprime o vetor inicial
    /* Esta linha chama a função imprimeVetor() passando o vetor v e o tamanho 3 como argumentos*/
    imprimeVetor(v, 3);

    // Modifica o vetor usando a função modificaVetor
    /* Esta linha chama a função modificaVetor() passando o vetor v e o tamanho 3 como argumentos*/
    modificaVetor(v, 3);

    // Imprime o novo vetor
    /* Esta linha chama a função imprimeVetor() passando o vetor v e o tamanho 3 como argumentos*/
    imprimeVetor(v, 3);

    return 0;
}
