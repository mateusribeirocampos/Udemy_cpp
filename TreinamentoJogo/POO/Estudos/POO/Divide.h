#ifndef DIVIDE_H
#define DIVIDE_H

#include <iostream>
using namespace std;

class Divide{;
    private:
    int num1;
    int num2;
    int divide;

    public:
    void setNum1(int num1){
        this->num1 = num1;
    }
    void setNum2(int num2){
        this->num2 = num2;
    }
    int getDivisao(){
        return divide;
    }
    void calculaDivisao(){
        if(num1 < num2) {
            cout << "Error!!! \nO primeiro numero deve ser maior que o segundo numero." << endl;
        } else{
            divide = num1 / num2;
            cout << "A divisao dos numeros e: " << divide << endl;
        }
    }
};

#endif // DIVIDE_H