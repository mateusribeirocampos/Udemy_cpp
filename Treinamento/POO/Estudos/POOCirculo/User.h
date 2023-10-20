#include <iostream>
#include "Circulo.h"
#include "limpaTela.h"
using namespace std;

class User
{
public:
    void getInfoUser()
    {
        limpaTela limpaTelaObj;
        limpaTelaObj.limparTela();

        int raio, opcoes = 0;
        while (opcoes < 1 || opcoes > 4)
        {
            cout << "Digite a opcao " << endl;
            cout << "1 - Calculo da area do circulo" << endl;
            cout << "2 - Calculo do perimetro do circulo" << endl;
            cout << "Digite a sua opcao: " << endl;
            cin >> opcoes;
        }
    }
};
