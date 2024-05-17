#include <iostream>
#include "funciones.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
    int num1, num2;
    showMessage();
    cout << "Proporcione el primer valor: ";
    cin >> num1;
    cout << "Proporcione el segundo valor: ";
    cin >> num2;

    cout << "La suma de ambos numeros es: " << sumatoria(num1, num2);
    return 0;
}
