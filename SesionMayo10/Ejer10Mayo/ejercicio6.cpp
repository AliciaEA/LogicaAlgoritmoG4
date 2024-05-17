/*. Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones 
que quiere promediar, luego ingrese esas calificaciones, las almacene en un 
arreglo y calcule el promedio.
*/

#include <iostream>
using namespace std;
#define MAX 10

// Variables
float nota[MAX];
float suma = 0;
int cant;

//Prototipos
void agregarNota();
void sumatoria();
float promedio(float suma);

int main()
{
    
    
    cout << "Proporcione la cantidad de calificaciones a ingresar(maximo 10): ";
    cin >> cant;
    if (cant <= MAX && cant > 0)
    {
    agregarNota();
    sumatoria();
        cout << "El promedio de calificaciones es : " << promedio(suma) << endl;
    }
    else {
        cout << "Cantidad invalida, intente de nuevo";
        main();
    }
    return 0;
}

void agregarNota()
{
    int i = 0;
    cout << "Proporcione las calificaciones: " << endl;
    while (i < cant)
    {
        cout << "Proporcione la nota del estudiante " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
        i++;
    }
}

void sumatoria()
{
    int i = 0;
    while ( i < cant)
    {
        suma += nota[i];
        i++;
    }
}

float promedio(float suma)
{
    return suma / cant;
}