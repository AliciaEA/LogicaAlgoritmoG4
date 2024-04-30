#include <iostream>

using namespace std;

#define MAX 5

int numeros[MAX];

int fila;

void agregar(int num);
void mostrar();

int main()
{
    int cant;
    int num;
    cout << "Dime cuantos # deseas ingresar: ";
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Dime un #";
        cin >> num;
        agregar(num);
    }

    cout << "Mostrar elementos \n";
    mostrar();
}



void agregar(int num)
{
    if (fila >= MAX)
    {
        cout << "No se puede agregar mas numeros" << endl;
        
    }
    else
    {
        numeros[fila] = num;
        fila++;
    }
}

void mostrar()
{
    if (fila == 0)
    {
        cout << "No hay elementos";
    }

    else
    {
        for (int i = 0; i < fila; i++)
        {
            cout << numeros[i] << endl;
        }
    }
}