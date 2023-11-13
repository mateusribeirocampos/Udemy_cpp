#ifndef SUBTRAI_H
#define SUBTRAI_H

#include <iostream>
using namespace std;

class Subtrai
{
    private:
    int num1;
    int num2;
    int subtracao;

    public:
    void setNum1(int num1){
        this->num1 = num1;
    }
    void setNum2(int num2){
        this->num2 = num2;
    }
    int getSubtracao(){
        return subtracao;
    }
    void calcularSubtracao(){
        subtracao = num1 - num2;
        cout << "A subtracao dos numeros e: " << subtracao << endl;
    }
};

#endif // SUBTRAI_H