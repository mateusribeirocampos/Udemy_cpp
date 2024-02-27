#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#define TAM 10

void imprimirVetor(int vetor[TAM])
{
    cout << "\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
}
// junta os dois subvetores criados ao dividir o vetor principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito)
{
    int i, j, k; //auxiliares
    int n1 = meio - indiceEsquerdo + 1; // tamanho do primeiro vetor auxiliar
    int n2 = indiceDireito - meio;      // tamanho do segundo vetor auxiliar

    // Cria dois Arrays temporários
    int vetorEsquerdo[n1], vetorDireito[n2];

    // passa o elementos do vetor do vetor principal para o primeiro vetor auxiliar (Esquerda)
    for (i = 0; i < n1; i++)
    {
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }

    for (j = 0; j < n2; j++)
    {
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    // reseta as variáveis
    i = 0;
    j = 0;
    k = indiceEsquerdo;

    while (i < n1 && j < n2)
    {
        // caso o valor na esquerda seja menor
        if (vetorEsquerdo[i] <= vetorDireito[j])
        {
            // passo para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];
            // incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            i++;
        }
        else
        {
            // passo para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];

            // incrementa o auxiliar para passar análise para os próximos valores do vetor auxiliar
            j++;
        }

        // Aumenta o indice de posicionamento no vetor
        k++;
    }
    // se faltarem alguns elementos do array Esquerdo, passa eles para o array principal
    while (i < n1)
    {
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    // se faltarem alguns elementos do array Esquerdo, passa eles para o array principal
    while (j < n2)
    {
        vetor[k] = vetorDireito[j];
        i++;
        k++;
    }
}

void mergeSort(int vetor[TAM], int indiceEsquerdo, int indiceDireito)
{
    if (indiceEsquerdo < indiceDireito)
    {
        // encontra o meio
        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;

        // da metade para trás
        mergeSort(vetor, indiceEsquerdo, meio);

        // da metade para frente
        mergeSort(vetor, meio + 1, indiceDireito);

        imprimirVetor(vetor);

        merge(vetor, indiceEsquerdo, meio, indiceDireito);
    }
}

int main()
{
    int vetor[TAM] = {58, 10, 99, 8, 75, 51, 14, 32, 122, 12};

    imprimirVetor(vetor);

    mergeSort(vetor, 0, TAM - 1);

    imprimirVetor(vetor);

    return 0;
}