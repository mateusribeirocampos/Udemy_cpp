#include <iostream>
#include "divide.h"
#include "soma.h"
#include "multiplica.h"
#include "subtrai.h"
#include "limpaTela.h"
#include "userInform.h"
using namespace std;
int main(){
    userInform user;
    int opcao = 0;

    while (opcao != 5)
    {
        user.getInform();
        cout << "Deseja realizar outra operacao? " << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Sair" << endl;
        cout << "Digite sua opcao: " << endl;
        cin >> opcao;

        if(opcao == 2){
            cout << "Obrigado por utilizar o programa!" << endl;
            break;
        }
    }
    
}