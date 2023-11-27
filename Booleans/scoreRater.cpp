#include <iostream>
using namespace std;

int main (){
    if(true){ // se o valor for 0, o if não é executado
        cout << "This is always displayed.\n\n"; // será executado porque o valor é 1 ou true
    } 
    if(false){ // nunca será executado
        cout << "This is never displayed.\n\n"; // não será executado porque o valor é 0 ou false
    }

    int score = 1000; // variável score recebe 1000
    if(score){ // o score é diferente de 0, então o if é executado
        cout << "At least you didn't score zero.\n\n"; // será executado porque o valor é 1 ou true
    }

    if(score >= 250){ // o score é maior ou igual a 250, então o if é executado
        cout << "You scored 250 or more. Decent.\n\n"; // será executado porque o valor é 1 ou true
    }

    if(score >= 500){ // o score é maior ou igual a 500, então o if é executado
        cout << "You scored 500 or more. Nice.\n\n"; // será executado porque o valor é 1 ou true
        // aninha ifs dentro de ifs
        if(score >= 1000){ // o score é maior ou igual a 1000, então o if é executado
            cout << "You scored 1000 or more. Impressive!\n"; // será executado porque o valor é 1 ou true
        }
    }    

    return 0;
}