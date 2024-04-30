#include <iostream>

using namespace std;

#define MAX 3

char numeros[3] = {'1', '3', '5'};
void imprimir();

int main(int argc, char const *argv[])
{
    imprimir();
    return 0;
}

void imprimir(){
    for (int i = 0; i < 3; i++)
    {
        cout << numeros[i] << endl;
    }
    
}