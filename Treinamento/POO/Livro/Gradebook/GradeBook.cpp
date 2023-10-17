// Define a classe GradeBook com uma função-membro displayMessage, criar um objeto GradeBook e chamar sua função displayMessage.
#include <iostream>
using namespace std;

// Definição da classe GradeBook
class GradeBook
{
    public:
    // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void diplsayMessage(){
        cout << "Welcome to the Grade Book!" << endl;
    } // fim da função displayMessage

    void diplayMessage2(){
        cout << "Segunda funcao-membro" << endl;
    }
}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main(){
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
    myGradeBook.diplsayMessage(); // chama a função displayMessage do objeto
    myGradeBook.diplayMessage2();// chama a função displayMessage2 do objeto
    return 0; //indica terminação bem-sucedida
} // fim de main