#include <iostream>
#include <string.h>
#include "variables.h"

using namespace std;

CITY cities[MAX_REG];
int pos = 0;

// funciones

void pedirDatos();
void mostrarTodo();
void addCity(CITY *city);
CITY findCity(int id);
int findPos(int id);
void updateCity(CITY *city, int id);
void destroyCity(int id);
void editar();
void eliminar();
void buscar();

int menu();
void principal();

void addCity(CITY *city)
{
    cities[pos] = *city;
    pos++;
}

CITY findCity(int id)
{
    CITY city;

    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id)
        {
            city = cities[i];
        }
    }
    return city;
}

void buscar()
{
    int id;
    cout << "Ingresa el ID de la ciudad a buscar: ";
    cin >> id;
    CITY city = findCity(id);
    cout << "ID: " << city.id << endl;
    cout << "Nombre: " << city.name << endl;
    cout << "Descripcion: " << city.description << endl;
}


int findPos(int id)
{
    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

void updateCity(CITY *city, int id)
{
    int position = findPos(id);
    strcpy(cities[position].name, city->name);
    strcpy(cities[position].description, city->description);
}

void editar()
{
    CITY city;
    int id;
    cout << "Ingresa el ID de la ciudad a editar: ";
    cin >> id;
    city = findCity(id);
    cout << "Nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Descripcion: ";
    scanf(" %[^\n]", city.description);
    updateCity(&city, id);
    cout << "Registro actualizado..." << endl;


}

void destroyCity(int id)
{
    int position = findPos(id);
    for (int i = position; i < pos - 1; i++)
    {
        cities[i] = cities[i + 1];
    }
    CITY c;
    cities[pos - 1] = c;
    pos--;
}

void eliminar()
{
    int id;
    cout << "Ingresa el ID de la ciudad a eliminar: ";
    cin >> id;
    destroyCity(id);
    cout << "Registro eliminado..." << endl;
}

int menu()
{
    int op;
    cout << "Menu" << endl;
    cout << "1. Agregar ciudad" << endl;
    cout << "2. Editar ciudad" << endl;
    cout << "3. Eliminar ciudad" << endl;
    cout << "4. Mostrar todos" << endl;
    cout << "5. Buscar" << endl;
    cout << "6. Salir" << endl;
    cin >> op;
    return op;
}

void pedirDatos()
{
    CITY city;
    cout << "Datos de la ciudad" << endl;
    cout << "ID: ";
    cin >> city.id;
    cout << "Nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Ingresa la descripcion de la ciudad: ";
    scanf(" %[^\n]", city.description);
    addCity(&city);
}
void mostrarTodo()
{
    cout << "Mostrar Registros" << endl;
    for (int i = 0; i < pos; i++)
    {
        cout << cities[i].id << endl;
        cout << cities[i].name << endl;
        cout << cities[i].description << endl;
    }
}

void principal()
{
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 2:
            editar();
            break;
        case 3:
            eliminar();
            break;
        case 4: 
            mostrarTodo();
            break;
        case 5:
            buscar();
            break;
        case 6:
            cout << "Adios baby..." << endl;
            break;
        default:
            cout << "Aprende a leer, solo hay 6 opciones" << endl;
            break;
        }
    } while (op != 6);
}
