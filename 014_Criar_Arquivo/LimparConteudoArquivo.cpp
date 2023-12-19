#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

int main () {

    // Criar um objeto para o arquivo
    ofstream meuArquivo;

    // Abrir o arquivo 
    meuArquivo.open("Texto.txt");

    //Esvasiar o arquivo 
    meuArquivo << "";

    //Fechar o arquivo
    meuArquivo.close();
    
    return 0;
}