#include <iostream>
using namespace std;

class NotaUAM
{
private:
    float nota1, nota2, nota3, nota4, notaN2;

public:
    void setNotas()
    {
        cout << "\nDigite a nota 1: ";
        cin >> nota1;

        cout << "\nDigite a nota 2: ";
        cin >> nota2;

        cout << "\nDigite a nota 3: ";
        cin >> nota3;

        cout << "\nDigite a nota 4: ";
        cin >> nota4;

        cout << "\nDigite a nota N2: ";
        cin >> notaN2;
    }

    float calcularMedia()
    {
        float media = ((nota1 + nota2 + nota3 + nota4) / 4) * 0.4 + (notaN2 * 0.6);
        return media;
    }
    void imprimirMedia()
    {
        cout << "\nA media final do aluno e: " << calcularMedia() << endl;
    }
};

int main()
{
    NotaUAM nota;
    nota.setNotas();
    nota.imprimirMedia();

    return 0;
}
