#include <iostream>

using namespace std;

int main()
{
    int valor;
    int quantidadesDeValores;

    cout << "Notas disponiveis [1, 2, 5, 10, 20, 50, 100, 200]\nDigite o valor que deseja sacar: ";
    cin >> valor;
    int valoresDisponiveis[] = {100, 50, 10, 5, 1};

    for (size_t i = 0; i < sizeof(valoresDisponiveis) / sizeof(valoresDisponiveis[0]); i++)
    {
        quantidadesDeValores = valor / valoresDisponiveis[i];
        valor = valor % valoresDisponiveis[i];

        if (quantidadesDeValores > 0 && quantidadesDeValores == 1) {
            cout << "Quantidade de " << valoresDisponiveis[i] << ": " << quantidadesDeValores << " nota " << endl;
        } else if (quantidadesDeValores > 1) {
            cout << "Quantidade de " << valoresDisponiveis[i] << ": " << quantidadesDeValores << " notas " << endl;
        }
    }

    return 0;
}