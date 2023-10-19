#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
using namespace std;

class Circulo
{
    private:
    double raio;
    double pi = 3.1415;
    double circulo;
    double area;
    double volume;

    public:
    double getRaio(double raio){
        this->raio = raio;
    }
};

#endif