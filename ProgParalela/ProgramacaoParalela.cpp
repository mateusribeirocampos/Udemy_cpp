#include <iostream>
#include <vector>
using namespace std;


//Função que será executada em paralelo
void calcular_quadrado(int numero){
    int resultado = numero * numero;
    cout << "O quadrado de " << numero << " e " << resultado << endl;
}


int main(){
    // Lista de números de entrada
    vector<int> numeros = {2, 3, 4, 5, 6};

    #pragma omp parallel for
    for (size_t i = 0; i < numeros.size(); i++)
    {
        calcular_quadrado(numeros[i]);
    }
    
    return 0;
}