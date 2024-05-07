/*Leer la edad de n cantidad de personas y decir
cual es el promedio de edades*/

#include <iostream>
using namespace std;
#define MAX 100

int main(int argc, char const *argv[])
{
    int cantidad, promedio, suma;
    int edades[MAX];
    cout << "Proporciona la cantidad de personas: " << endl;
    cin >> cantidad;

    if (cantidad <= MAX)
    {
        for (int i = 0; i < cantidad; i++)
        {
            cout << "Proporciona la edad: ";
            cin >> edades[i];
        }

        for (int i = 0; i < cantidad; i++)
        {
            suma += edades[i];
        }
        promedio = suma / cantidad;
        cout << "El promedio de edades es: " << promedio << endl;
    }
    else
    {
        cout << "La cantidad de personas no puede ser mayor a " << MAX << endl;
        main(0, 0);
    }

    return 0;
}
