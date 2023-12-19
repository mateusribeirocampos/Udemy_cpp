#include <iostream>
using namespace std;

int main()
{

    int matriz[2][2], i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Informe o valor da linha [" << i << "] e coluna [" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;

    // imprimir os valores
    cout << "Matriz 2 x 2 " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "  " << matriz[i][j];
        }
        cout << "\n";
    }

    return 0;
}