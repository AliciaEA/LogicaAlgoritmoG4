#include <iostream>

int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int buscarMayor()
{
    int mayor = numeros[0];
    for (int i = 1; i < 10; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }
    return mayor;
}

int main() {
    for(int number = 0; number < 10; number++) {
        if(number == 5) {
            continue;  // Skip to the next iteration
        }
        std::cout << "Number is " << number << std::endl;
    }
    std::cout << "Out of loop" << std::endl;
    return 0;
}

