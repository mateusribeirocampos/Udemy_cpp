#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {
    //criar uma string - Dizer qual arquivo será lido
    ifstream input("Texto.txt");

    //String que receberá o texto lido
    string textoLido;

    //passa o texto do arquivo para a string
    for (string line; getline(input, line);)
    {
        textoLido += line;
    }
    // Mostrar o conteúdo
    cout << textoLido << endl;

    return 0;
}