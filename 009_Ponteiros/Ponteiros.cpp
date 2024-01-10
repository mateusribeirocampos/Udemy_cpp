#include <iostream>

int main (){
    int num = 10; // num é uma variável inteira
    int *ptr = &num; // ptr é um ponteiro para um inteiro

    std::cout << "Valor do numero = " << num << std::endl; // Imprime o valor de num
    std::cout << "Endereco do numero = " << &num << std::endl; // Imprime o endereço de num
    std::cout << std::endl;
    if(num == *ptr) // Verifica se o valor de num é igual ao valor apontado por ptr
        std::cout << "num eh igual ao valor apontado por ptr" << &num << std::endl;
    else
        std::cout << "num nao eh igual ao valor apontado por ptr" << &num << std::endl;

    std::cout << "\nValor do ponteiro = " << ptr << std::endl; // Imprime o valor de ptr
    std::cout << "Endereco do ponteiro = " << *ptr << std::endl; // Imprime o endereço de ptr

    *ptr = 20; // Altera o valor de num para 20

    std::cout << "Valor do numero depois da modificacao= " << num << std::endl; // Imprime o valor de num

    return 0;
}