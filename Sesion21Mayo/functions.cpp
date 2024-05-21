#include <iostream>
#include "variables.h"

using namespace std;

/*
CRUD
C - Create
R - Read
U - Update
D - Delete
*/

// Create
void addReg();
void showReg();
void menu();

void addReg()
{
    cout << "Datos del estudiante" << endl;
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif);

    cout << "Nombres: ";
    scanf(" %[^\n]", people[pos].name);

    cout << "Apellidos: ";
    scanf(" %[^\n]", people[pos].lastname);

    cout << "Año: ";
    scanf("%d", people[pos].year);
    pos++;
}

// Read
void showReg()
{
    printf("Registros: ");
    for (int i = 0; i < pos; i++)
    {
        printf("Nombre: %s %s \n Año: %d", people[i].name, people[i].lastname, people[i].year);
        cout << "***********************" << endl;
    }
}

void menu()
{
    int op = 0;
    do
    {
        system("cls || clear");
        cout << "1. Agregar" << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:
            addReg();
            system("pause");
            break;
        case 2:
            showReg();
            system("pause");
            break;
        case 3:
            cout << "Adios" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

    } while (op != 3);
}