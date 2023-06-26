#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

void limpaTela() {
    system("cls");
}

int main() {    
    int a = 10;

    char palavra[3];
    palavra[0] = 'G';
    palavra[1] = 'o';
    palavra[2] = 'L';
    printf("%c %c %c\n", palavra[0], palavra[1], palavra[2]);

    string outraPalavra = "gol";
    cout << outraPalavra << endl;
    
    printf("\nO valor %d eh maior que 0", a);
    
    cout << "\nO valor de " << a << " eh maior que 0";


    return 0;
}