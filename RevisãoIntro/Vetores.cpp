#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 3


using namespace std;

int main() {
    //Declarando vetores
    int vetor [TAM], k = 0, a, b;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite os 3 valores do vetor [" << i << "]: ";
        cin >> vetor[i];
    }
    
    for (int j = 0; j < TAM; j++) {
        cout << "Vetor[" << j << "] = " << vetor[j] << endl;
    }

    while(k < TAM) {
        cout << "Os vetores do while: " << vetor[k] << endl;
        k++;
    }


    int matriz[TAM][TAM] = {1,2,3,4,5,6,7,8,9};


    //Definir matriz
    for (a = 0; a < TAM; a++)
    {   
        for (b = 0; b < TAM; b++)
        {
            cout << matriz[a][b] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}