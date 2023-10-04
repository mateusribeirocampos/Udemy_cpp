#include <iostream>
using namespace std;

class InteiroGigante {
  private:
    int digitos[40];

  public:
    void leiaInteiroGigante() {
      cout << "Digite um inteiro de até 40 dígitos: ";
      string num;
      cin >> num;

      int idx = 0;
      for(char c : num) {
        digitos[idx++] = c - '0';  
      }
    }

    void imprimeInteiroGigante() {
      bool comecou = false;
      for(int i = 39; i >= 0; i--) {
        if(digitos[i] != 0) {
          comecou = true;
        }
        if(comecou) {
          cout << digitos[i];
        }
      }
      cout << endl;
    }

    void adicioneInteiroGigantes(InteiroGigante &ig1, InteiroGigante &ig2) {
      int carry = 0;
      for(int i = 39; i >= 0; i--) {
        int digito = ig1.digitos[i] + ig2.digitos[i] + carry;
        carry = digito / 10;
        digitos[i] = digito % 10;  
      }
    }

    void subtraiaInteiroGigantes(InteiroGigante &ig1, InteiroGigante &ig2) {
      int borrow = 0;
      for(int i = 39; i >= 0; i--) {
        int digito = ig1.digitos[i] - ig2.digitos[i] - borrow;
        if(digito < 0) {
          digitos[i] = digito + 10;
          borrow = 1;
        } else {
          digitos[i] = digito;
          borrow = 0;
        }
      }
    }

    bool eIgual(InteiroGigante &ig) {
      for(int i = 0; i < 40; i++) {
        if(digitos[i] != ig.digitos[i]) {
          return false;
        }
      }
      return true;
    }

    bool naoEIgual(InteiroGigante &ig) {
      return !eIgual(ig); 
    }

    bool ehMaior(InteiroGigante &ig) {
      for(int i = 39; i >= 0; i--) {
        if(digitos[i] > ig.digitos[i]) {
          return true;
        } else if(digitos[i] < ig.digitos[i]) {
          return false;
        }
      }
      return false; 
    }

    bool ehMenorQueOuIgualA(InteiroGigante &ig) {
      return ehMenorQue(ig) || eIgual(ig);
    }

    bool ehMenorQue(InteiroGigante &ig) {
      return !ehMaior(ig) && !eIgual(ig);
    }
};

int main() {
  InteiroGigante n1, n2, resultado;

  n1.leiaInteiroGigante();
  n2.leiaInteiroGigante();

  resultado.adicioneInteiroGigantes(n1, n2);
  resultado.imprimeInteiroGigante();

  resultado.subtraiaInteiroGigantes(n1, n2);
  resultado.imprimeInteiroGigante();

  return 0;
}