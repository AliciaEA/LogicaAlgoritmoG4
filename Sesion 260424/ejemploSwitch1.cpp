/*Leer X cantidad de numeros e imprimir la suma de dichos numeros*/

#include <iostream>
using namespace std;

#define MAX 5

// Variables globales
int nums[MAX];
int pos = 0;

// Prototipos
void agregarNum(int num);
int sumar(int suma, int elemAct);

// Procedimiento
void agregarNum(int num)
{
    if (pos < MAX)
    {
        nums[pos] = num;
        pos++;
    }
    else
    {
        cout << "No hay espacio para almacenar " << num << endl;
    }
}

void menu()
{
    int op, num, suma = 0;

    cout << "1. Ingresar numero: " << endl;
    cout << "2. Sumar." << endl;
    cout << "3. Salir." << endl;

    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Agregar numero. " << endl;
        cout << "Dime un numero: ";
        cin >> num;
        agregarNum(num);
        break;
    case 2:
        cout << "Sumar: " << endl;
        cout << "La suma es " <<sumar(suma, pos-1) << endl;
        break;
    case 3:
        cout << "Salir..." << endl;
        break;

    default:
        cout << "Opcion invalida..." << endl;
        break;
    }
    if (op != 3)
    {
        menu();
    }
}

int sumar(int suma, int elemAct)
{
    if(elemAct == -1){
        return suma;
    }

    suma += nums [elemAct];
    //elemAct --;
    sumar(suma, elemAct -1);
    
}

int main()
{
    menu();
}
