/*. Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.*/

#include <iostream>
#define MAX 10

using namespace std;

int numeros[MAX];

int main(int argc, char const *argv[])
{
    int i = 0;
    int mayor;

    while (i < MAX)
    {
        cout << "Proporciona un numero: ";
        cin >> numeros[i];
        i++;
    }

    mayor = numeros[0];
    i = 0;
    while (i < MAX)
    {
        if (numeros[i] > mayor)
            mayor = numeros[i];
        i++;
    }

    cout << "El mayor es " << mayor << endl;

    return 0;
}
