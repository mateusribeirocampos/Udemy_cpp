#ifndef MULTIPLICA_H
#define MULTIPLICA_H

#include <iostream>
using namespace std;

class Multiplica{
    private:
    int num1;
    int num2;
    int multiplica;

    public:
    void setNum1(int num1){
        this->num1 = num1;
    }
    void setNum2(int num2){
        this->num2 = num2;
    }
    int getMultiplica(){
        return multiplica;
    }
    void calculaMultiplica(){
        multiplica = num1 * num2;
        cout << "A multiplicacao dos numeros e: " << multiplica << endl;
    }

};

#endif // MULTIPLICA_H