#include <iostream>
#include "Soma.h"
#include "Subtrai.h"
#include "Multiplica.h"
#include "Divide.h"
#include "LimpaTela.h"
using namespace std;

class userInform
{
public:
    void getInform()
    {
        LimpaTela limpaTelaObj;
        limpaTelaObj.limpaTela();

        int num1, num2, opcao = 0;
        cout << "Informe o primeiro numero: " << endl;
        cin >> num1;
        cout << "Informe o segundo numero: " << endl;
        cin >> num2;
        while (opcao < 1 || opcao > 4)
        {
            cout << "O que deseja fazer: " << endl;
            cout << "1 - somar (+)" << endl;
            cout << "2 - subtrair (-)" << endl;
            cout << "3 - multiplicar (*)" << endl;
            cout << "4 - dividir (/)" << endl;
            cout << "Digite sua opcao: " << endl;
            cin >> opcao;

            limpaTelaObj.limpaTela();
            
            switch (opcao)
            {
            case 1:
                Soma somaObj;
                somaObj.setNum1(num1);
                somaObj.setNum2(num2);
                somaObj.calcularSoma();
                break;
            case 2:
                Subtrai subtraiObj;
                subtraiObj.setNum1(num1);
                subtraiObj.setNum2(num2);
                subtraiObj.calcularSubtracao();
                break;
            case 3:
                Multiplica multiplicaObj;
                multiplicaObj.setNum1(num1);
                multiplicaObj.setNum2(num2);
                multiplicaObj.calculaMultiplica();
                break;
            case 4:
                Divide divideObj;
                divideObj.setNum1(num1);
                divideObj.setNum2(num2);
                divideObj.calculaDivisao();
                break;
            default:
                break;
            }
        }
    }
};