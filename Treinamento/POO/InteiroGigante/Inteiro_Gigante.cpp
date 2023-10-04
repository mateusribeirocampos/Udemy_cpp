#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;

// TODO: Create a class called InteiroGigante

class InteiroGigante
{
    private:
    // TODO: The array should store 40 digits
    long int array[40];

    //TODO: The constructor should initialize the array to all zeros
    public:
    InteiroGigante()
    {
        for (int i = 0; i < 40; i++)
        {
            array[i] = 0;
        }
    }
};

//TODO: implement the funcion to read an integer from the user and store it in the array
vector<long int> leiaInteiroGigante(){  
    vector<long int> array(40);
    for(int i = 0; i < 40; i++){
        cin >> array[i];
    }
    return array;
}

void ImprimeInteiroGigante(vector<long int> array){
    for(int i = 0; i < 40; i++){
        cout << array[i] << " ";
    }
}

vector<long int> adicioneInteiroGigante(vector<long int> array, long int valor){
    for(int i = 0; i < 40; i++){
        array[i] = array[i] + valor;
    }
    return array;
}

vector<long int> subtraiInteiroGigante(vector<long int> array, long int valor){
    for(int i = 0; i < 40; i++){
        array[i] = array[i] - valor;
    }
    return array;
}

int main()
{
    vector<long int> array = leiaInteiroGigante();
    ImprimeInteiroGigante(array);
    
    return 0;
}