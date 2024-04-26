#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valor1, valor2;

    cout << "Proporcionar el primer valor: ";
    cin >> valor1;

    cout << "Proporcionar el segundo valor: ";
    cin >> valor2;


    cout << "Los valores intercambiados son: " <<valor1
    << ", " << valor2 << endl;

    cout << "Los valores intercambiados son: " <<valor2
    << ", " << valor1;

    return 0;
}

