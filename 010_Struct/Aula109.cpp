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

    //criando uma lista de valores
    Fruta *ponteiroListaDeFrutas = new Fruta[2];

    //modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    // Percorrendo e exibindo
    for (int i = 0; i < 2; i++)
    {
        cout << "\nFruta: " << ponteiroListaDeFrutas[i].nome << ", cor: " << ponteiroListaDeFrutas[i].cor;
    }
    
    return 0;
}