#include <iostream>

using namespace std;

/*Escribir un programa que lea los tres lados 
de un triángulo. Determinar el tipo de triángulo: 
equilátero, si tiene tres lados iguales; o isósceles, si tiene 
dos lados iguales. Dar énfasis al uso de la estructura de 
decisión doble (if-then-else).*/

int main()
{
    int lado1, lado2, lado3;
    cout << "Proporciona la medida del primer lado: ";
    cin >> lado1;

    cout << "Proporciona la medida del segundo lado: ";
    cin >> lado2;

    cout << "Proporciona la medida del tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 == lado3)
    {
        cout << "El triangulo es equilatero";
    }
    else{
        cout << "No se...";
    }
    
}
