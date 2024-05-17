#include <iostream>
#include <cstdlib>

using namespace std;

void calcularFibonacci(int n, int fibonacci[]) {
    int num1 = 0, num2 = 1, siguiente;
 //0 1 1 2 3 5
 
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            siguiente = i;
        } else {
            siguiente = num1 + num2;
            num1 = num2; //Penúltimo num. de la serie
            num2 = siguiente; //Último num. de la serie
        }
        fibonacci[i] = siguiente;
    }
}

void imprimirFibonacci(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    int opcion, N, fibonacci[100];
    int cantidadNumeros = 0;

    bool serieCalculada = false;

    //bool a = 1;
    //bool b = true;

    //bool c = 0;
    //bool d = false;


    while (true) {
        system("cls || clear");
        cout << "\nMENU:\n";
        cout << "1. Mostrar N numeros de la serie Fibonacci\n";
        cout << "2. Mostrar ultima serie consultada\n";
        cout << "3. Salir\n";

        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor de N para calcular los primeros N numeros de la serie de Fibonacci: ";
                cin >> N;

                // Validar la entrada del usuario
                while (N <= 0) {
                    cout << "Por favor ingrese un numero entero positivo: ";
                    cin >> N;
                }

                calcularFibonacci(N, fibonacci);
                serieCalculada = true;
                cantidadNumeros = N;
                cout << "Los primeros " << N << " numeros de la serie de Fibonacci son: ";
                imprimirFibonacci(fibonacci, N);
                break;

            case 2:
                if (serieCalculada) {
                    cout << "La ultima serie de Fibonacci consultada fue: ";
                    imprimirFibonacci(fibonacci, cantidadNumeros);
                    cout << "Cantidad de numeros en esta serie: " << cantidadNumeros << endl;
                } else {
                    cout << "Aun no se ha calculado ninguna serie de Fibonacci.\n";
                }
                cout << endl;
                break;

            case 3:
                cout << "Adioooos\n";
                return 0;

            default:
                cout << "Opcion no valida - Seleccione una opcion valida.\n";
                break;
        }

        system("pause");
    }

    return 0;
}
