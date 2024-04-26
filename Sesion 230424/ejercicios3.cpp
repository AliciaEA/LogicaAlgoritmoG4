/*Ejercicio #3: Una compañía dedicada al alquiler de automóviles, cobra $30
hasta un máximo de 500 KM de distancia recorrida. Para más de 500
KM y hasta 1,000 KM, cobra $30 más un monto adicional del 5% por cada
kilómetro en exceso sobre 500. Para más de 1,000 KM, cobra $30 más un
monto adicional del 8% por cada kilómetro en exceso sobre 1,000. Los
precios ya incluyen el 15% del impuesto (IVA). Escriba un programa, que
determine el monto a pagar por el alquiler de un vehículo sin
impuesto, y el monto a pagar con el impuesto incluido. Dar énfasis al uso de la estructura
de decisión anidada (if-then-else, if-then-else, if…)*/

#include <iostream>

using namespace std;

float precioSinImpuesto(int costoDistancia);

int main()
{
    int distancia, kmExtra;
    float costoDist = 30;
    float precioTotal;

    cout << "Proporciona la distancia recorrida (en km) por el usuario: ";
    cin >> distancia;

    if (distancia > 0 && distancia <= 500 )
    {

        printf("El precio con impuestos sera $%i", costoDist);
        printf("\nEl precio sin impuestos sera $%.2f", precioSinImpuesto(costoDist));
    }
    else if (distancia > 0 && distancia <= 1000)
    {
        float porcentaje;
        kmExtra = distancia - 500;
        porcentaje = costoDist * 0.05;
        precioTotal = costoDist + (kmExtra * porcentaje);

        printf("El precio con impuestos sera $%.2f", precioTotal);
        printf("\nEl precio sin impuesto sera $%.2f", precioSinImpuesto(precioTotal));
    }
    else if (distancia > 1000)
    {
        float porcentaje;
        kmExtra = distancia - 1000;
        porcentaje = costoDist * 0.08;
        precioTotal = costoDist + (kmExtra * porcentaje);

        printf("El precio con impuestos sera $%.2f", precioTotal);
        printf("\nEl precio sin impuesto sera $%.2f", precioSinImpuesto(precioTotal));
    }
    else
    {
        cout << "Distancia invalida...";
    }
}

float precioSinImpuesto(int costoDistancia)
{
    return costoDistancia - (costoDistancia * 0.15);
}
