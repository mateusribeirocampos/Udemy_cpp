#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, soma, media;
    char nome[10];
    cout << "Informe um numero a " << endl;
    cin >> a;
    cout << "Informe um numero b " << endl;
    cin >> b;
    cout << "Informe um numero c " << endl;
    cin >> c;
    cout << "Informe o nome da pessoa: " << endl;
    cin >> nome;
    soma = a + b + c;
    media = (a + b+ c)/3;
    

    cout << "Valor a: " << a << "\nValor de b: " << b << "\nValor de c: " << c << endl;
    cout << "soma a + b + c = " << soma << endl;
    cout << "Media dos valores de a, b e c: " << media << endl;
    cout << "Nome: " << nome;
}
