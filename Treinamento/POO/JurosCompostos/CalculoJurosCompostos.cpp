#include <iostream> // biblioteca para entrada e saída de dados
#include <cmath> // biblioteca para funções matemáticas
#include <iomanip> // biblioteca para manipulação de entrada e saída de dados
using namespace std; // para não precisar escrever std::cout, std::cin, std::endl, etc.

class CalculoJurosCompostos
{
private:
    double capitalPrincipal = 1000.0; //quantia inicial antes dos juros 
    double taxa = 0.05; // taxa de juros 
    double tempo = 15;  // tempo em anos
    double montante; // quantia em depósito ao fim de cada ano

    public:
    void setCapitalPrincipal(double capitalPrincipal){
        this->capitalPrincipal = capitalPrincipal;
    }
    void setTaxa(double taxa){
        this->taxa = taxa;
    }
    void setTempo(double tempo){
        this->tempo = tempo;
    }
    double getMontante(){
        return montante;
    }
    // Calcula quantia de depósito para cada um dos dez anos
    void calcularMontante(){
        // exibe cabeçalhos
        cout << "Ano" << setw(25) << "Montante depositado" << endl;
        // configura o formato de saída de ponto flutuante
        cout << fixed << setprecision(2);
        // calcula quantia de depósito para cada um dos dez anos
        for (int ano = 1; ano <= tempo; ano++){
            // calcula nova quantia para o ano especificado
            montante = capitalPrincipal * pow(1.0 + taxa, ano);
            // exibe o ano e a quantia
            cout << setw(3) << ano << setw(19) << montante << endl;
        }
    }
};

int main(){

    CalculoJurosCompostos calculoJurosCompostos;
    calculoJurosCompostos.calcularMontante();

    return 0;
}
