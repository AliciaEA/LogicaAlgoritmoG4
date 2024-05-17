#include <iostream>
#include "variables.h"

using namespace std;

int menu();
void start();
void addGrades();
void showGrades();
int getHighGrade();
int getLowGrade();
int getAverage();

int menu()
{
    int option;
    system("cls || clear");
    cout << "1. Ingresar notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Mostrar nota alta" << endl;
    cout << "4. Mostrar nota baja" << endl;
    cout << "5. Mostrar promedio" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> option;

    return option;
}

void start()
{
    int option;
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingresar notas" << endl;
            addGrades();
            system("pause");
            break;
        case 2:
            cout << "Mostrar notas" << endl;
            showGrades();
            break;
        case 3:
            cout << "Mostrando la nota mas alta: ";
            cout << getHighGrade() << endl;
            system("pause");
            break;
        case 4:
            cout << "Mostrando la nota mas baja: ";
            cout << getLowGrade() << endl;
            system("pause");
            break;
        case 5:
            cout << "Mostrando el promedio: ";
            cout << getAverage() << endl;
            system("pause");
            break;
        case 6:
            cout << "Salir" << endl;
            system("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
        }
    }
}

void addGrades()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No se pueden ingresar mas notas" << endl;
    }
}

void showGrades()
{
    cout << "Notas ingresadas: " << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "Nota " << i + 1 << ": " << grades[i] << endl;
    }
    system("pause");
}

int getHighGrade()
{
    int highGrade = grades[0];
    for (int i = 1; i < position; i++)
    {
        if (grades[i] > highGrade)
        {
            highGrade = grades[i];
        }
    }
    return highGrade;
}

int getLowGrade()
{
    int lowGrade = grades[0];
    for (int i = 1; i < position; i++)
    {
        if (grades[i] < lowGrade)
        {
            lowGrade = grades[i];
        }
    }
    return lowGrade;
}

int getAverage()
{
    int sum = 0;
    for (int i = 0; i < position; i++)
    {
        sum += grades[i];
    }
    return sum / position;
}