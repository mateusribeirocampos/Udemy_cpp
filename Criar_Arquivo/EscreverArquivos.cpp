#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

int main () {
    ofstream arquivoDeSaida;

    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    arquivoDeSaida << "\nRodrigo Silveira\nSandra Albuquerque\nIsadora Silveira";

    arquivoDeSaida.close();

    return 0;
}