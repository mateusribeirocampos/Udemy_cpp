#ifndef SOMA_H
#define SOMA_H

#include <iostream>
using namespace std;

class Soma
{
    private:
    int num1;
    int num2;
    int soma;

    public:
    void setNum1(int num1){
        this->num1 = num1;
    }
    void setNum2(int num2){
        this->num2 = num2;
    }
    int getSoma(){
        return soma;
    }
    void calcularSoma(){
        soma = num1 + num2;
        cout << "A soma dos numeros e: " << soma << endl;
    }
};

#endif // SOMA_H