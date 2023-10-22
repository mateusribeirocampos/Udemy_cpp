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

        Circulo circuloObj;

        int raio, opcoes = 0;
        while (opcoes < 1 || opcoes > 3)
        {
            cout << "Digite a opcao " << endl;
            cout << "1 - Calculo da area do circulo" << endl;
            cout << "2 - Calculo do perimetro do circulo" << endl;
            cout << "Digite a sua opcao: " << endl;
            cin >> opcoes;

            limpaTelaObj.limparTela();

            switch (opcoes)
            {
            case 1:
                cout << "Digite o raio para carcular a area circulo: " << endl;
                cin >> raio;
                circuloObj.setRaio(raio);
                circuloObj.calculaArea();
                break;
            case 2:
                cout << "Digite o raio para calcular o perimetro: " << endl;
                cin >> raio;
                circuloObj.setRaio(raio);
                circuloObj.calculaPerimetro();
                break;
            default:
                break;
            }
        }
    }
};
