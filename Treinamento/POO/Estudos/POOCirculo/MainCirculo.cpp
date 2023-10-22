#include <iostream>
#include "limpaTela.h"
#include "User.h"
#include "Circulo.h"
using namespace std;

int main()
{
    int opcao = 0;

    while (opcao != 3)
    {
        User infoUser;
        infoUser.getInfoUser();
        cout << "Deseja realizar outra operacao? " << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Sair" << endl;
        cout << "Digite sua opcao: " << endl;
        cin >> opcao;

        if (opcao == 1)
        {
            infoUser.getInfoUser();
        }
        else
        {
            cout << "Obrigado por utilizar o programa!" << endl;
            break;
        }

        return 0;
    }
}