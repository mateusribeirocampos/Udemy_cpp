#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
using namespace std;

class Circulo
{
    private:
    double raio;
    double pi = 3.1415;
    double area;
    double perimentro;

    public:
    // setar o raio do circulo
    void setRaio(double raio){
        this->raio = raio;
    }
    // pegar o raio do circulo
    void getPi(double pi){
        this->pi = pi;
    }
    // pegar a area do circulo
    double getArea(){
        return area;
    } 
    // calcular a area do circulo
    void calculaArea(){
        area = 2 * pow(raio, raio);
        cout << "A area do circulo: " << area << endl << endl;
    }
    // pegar o perimetro do circulo
    double getPerimetro(){
        return perimentro;
    }
    // calcular o perimetro do circulo
    void calculaPerimetro(){
        perimentro = 2 * pi * raio;
        cout << "O perimetro do circulo: " << perimentro << endl << endl;
    }
};

#endif