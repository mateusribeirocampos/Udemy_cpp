#include <iostream>
#include <string>
#include <new>

using namespace std;

struct Fruta
{
    string cor;
    string nome;
};


int main() {

    // Criando um ponteiro para o struct criado
    Fruta *primeiraFruta = new Fruta;

    // modificando valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    cout << "Fruta: " << primeiraFruta->nome << ", cor: " << primeiraFruta->cor;

    


    return 0;
}