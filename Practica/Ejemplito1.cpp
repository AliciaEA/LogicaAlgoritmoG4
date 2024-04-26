#include <iostream>

using namespace std;

void intercambio(int& val1, int& val2);

int main()
{
    int valor1, valor2;

    cout << "Proporciona el primer valor: ";
    cin >> valor1;

    cout << "Proporciona el segundo valor: ";
    cin >> valor2;

    intercambio(valor1, valor2);
    cout << "Los valores intercambiados son: " << valor1 << ", " << valor2;
}

void intercambio(int& val1, int& val2)
{
    int temp;

    temp = val1;
    val1 = val2;
    val2 = temp;

    
}
