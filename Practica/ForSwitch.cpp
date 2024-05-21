/*Programa que permita realizar operaciones como mostrar
la suma de sus cuadrados y los numeros pares e impares con numeros del 1 a n,*/

#include <iostream>
#include <cmath>
using namespace std;

int num;

void pedirNumero();
int sumaCuadrados(int num);
void mostrarPares(int num);
void mostrarImpares(int num);

int main(int argc, char const *argv[])
{
    int opcion;

    cout << "1. Mostrar suma de cuadrados" << endl;
    cout << "2. Mostrar numeros pares " << endl;
    cout << "3. Mostrar numeros impares" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

   
    switch (opcion)
    {
    case 1:
        pedirNumero();
        cout << endl << "Calculando suma de cuadrados..." << endl;
        cout << "La suma de los cuadrados de los numeros del 1 al " << num << " es: " << sumaCuadrados(num) << endl;
        cout << endl;
        break;
    case 2:
        pedirNumero();
        cout << endl << "Mostrando numeros pares" << endl;
        mostrarPares(num);
        cout << endl;
        break;
    case 3:
        pedirNumero();
        cout << "Mostrar numeros impares" << endl;
        mostrarImpares(num);
        cout << endl;
        break;
    case 4:
        cout << "Salir" << endl;
        break;
    default:
        cout << "Opcion no valida" << endl;
        break;
        return 0;
    }
    if (opcion != 4)
    {
        main(0, 0);
    }
}

void pedirNumero()
{
    cout << endl << "|| Operaciones con numero del 1 al n ||" << endl;
    cout << "Ingresa hasta que numero quieres que se realicen las operaciones: ";
    cin >> num;

}
int sumaCuadrados(int num)
{
    int suma = 0;
    for (int i = 1; i <= num; i++)
    {
        suma += pow(i, 2);
    }
    return suma;
}

void mostrarPares(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}

void mostrarImpares(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}
