#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Retangulo
{
private:
    double x1, y1; // Coordenadas do canto superior esquerdo
    double x2, y2; // Coordenadas do canto inferior direito

    // constructor que recebe as coordenadas
public:
    Retangulo(double x1, double y1, double x2, double y2)
    {
        if (x1 >= 0.0 && x1 <= 20.0 && y1 >= 0.0 && y1 <= 20.0 && x2 >= 0.0 && x2 <= 20.0 && y2 >= 0.0 && y2 <= 20.0 && x1 < x2 && y1 < y2)
        {
            this->x1 = x1;
            this->x2 = x2;
            this->y1 = y1;
            this->y2 = y2;
        }
        else
        {
            cerr << "Coordenadas invalidas!" << endl;
            exit(1);
        }
    }

    // Função para calcular o comprimento do retângulo
    double comprimento()
    {
        return x2 - x1;
    }

    // Função para calcular a largura do retângulo
    double largura()
    {
        return y1 - y2;
    }

    // Função para calcular o perimetro do retângulo
    double perimetro()
    {
        return 2 * (comprimento() + largura());
    }

    // Função para calcular a area do retângulo
    double area()
    {
        return comprimento() * largura();
    }

    // Função para determinar se o retângulo é um quadrado
    bool quadrado()
    {
        return comprimento() == largura();
    }
};

int main()
{
    Retangulo ret(2.0, 10.0, 8.0, 6.0);
    
    
    /*// Variáveis gerais
    double x1, y1, x2, y2;


    // Interação com o usuário
    // entrada de dados do retangulo pelo usuário. Criação de uma lista de retangulos
    cout << "Digite as coordenadas x1 do canto superior esquerdo do retangulo: " << endl;
    cin >> x1;
    cout << "Digite as coordenadas y1 do canto superior direito do retangulo: " << endl;
    cin >> y1;
    cout << "Digite as coordenadas x2 do canto inferior esquerdo do retangulo: " << endl;
    cin >> x2;
    cout << "Digite as coordenadas y2 do canto inferior direito do retangulo: " << endl;
    cin >> y2;

    Retangulo ret(x1, y1, x2, y2);*/

    cout << "O comprimento do retangulo eh: " << ret.comprimento() << endl;
    cout << "A largura do retangulo eh: " << ret.largura() << endl;
    cout << "O perimetro do retangulo eh: " << ret.perimetro() << endl;
    cout << "A area do retangulo eh: " << ret.area() << endl;
    if (ret.quadrado())
    {
        cout << "O retangulo eh um quadrado!" << endl;
    }
    else
    {
        cout << "O retangulo nao eh um quadrado!" << endl;
    }

    return 0;
}