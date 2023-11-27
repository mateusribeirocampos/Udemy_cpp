#include <iostream>
using namespace std;

int main () {

    int score;
    cout << "Enter your score: ";
    cin >> score;

    if(score >= 1000){
        cout << "Sua pontuacao eh 1000 ou mais. Impressionante!\n";
    } else if(score >= 500){
        cout << "Sua pontuacao eh 500 ou mais. Legal.\n";
    } else if(score >= 250){
        cout << "Sua pontuacao eh 250 ou mais. Decente.\n";
    } else {
        cout << "Sua pontuacao eh menor que 250. Nada para se gabar.\n";
    }

    return 0;
}