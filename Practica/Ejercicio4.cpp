/*Programa para crear un procedimiento que
reciba dos variables reales como argumentos e intercambiar sus valores*/

#include <iostream>

using namespace std;

void intercambio (int val1, int val2);

int main(int argc, char const *argv[])
{
    int valor1, valor2;

    cout << "Proporcionar el primer valor: ";
    cin >> valor1;

    cout << "Proporcionar el segundo valor: ";
    cin >> valor2;

    intercambio(valor1, valor2);
    return 0;
}

void intercambio (int val1, int val2)
{
    int temp;

    cout <<"Los valores sin intercambiar son: "<< val1 << ", " << val2 <<endl;

    temp = val1;
    val1= val2;
    val2 = temp;

    cout << "Los valores intercambiados son: " << val1 << ", " << val2;

}
