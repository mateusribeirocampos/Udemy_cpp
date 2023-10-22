#include <iostream>
#include "limpaTela.h"
#include "User.h"
#include "Circulo.h"
using namespace std;

int main()
{
    int opcao = 0;

    while (opcao != 2)
    {
        User infoUser;
        infoUser.getInfoUser();
        cout << "Deseja realizar outra operação? " << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Sair" << endl;
        cout << "Digite sua opção: " << endl;
        cin >> opcao;

        if (opcao == 2)
        {
            cout << "Obrigado por utilizar o programa!" << endl;
            break;
        }

        return 0;
    }
}