#include <stdio.h>
#define TAM 7

double somaVetorDouble(double *vetor, int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

void imprimeVetorDouble(double *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor[%d] = %.2lf\n", i, vetor[i]);
    }
    
}

int main() {
    // inicialização do vetor e variáveis
    double v[TAM];

    printf("Digite os valores dos elementos do vetor v");
    for (int i = 0; i < TAM; i++)
    {
        printf("\nDigite o valor do vetor v[%d] = ", i);
        scanf("%lf", &v[i]);
    }

    imprimeVetorDouble(v, TAM);
    
    double soma = somaVetorDouble(v, TAM);
    printf("A soma dos elementos do vetor v = %.2lf\n", soma);

}