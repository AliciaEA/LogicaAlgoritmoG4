/*Leer un numero y decir si es primo o no*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, i = 1, cont = 0;

    cout << "Dime un numero: ";
    cin >> num;

    while (i <= num)
    {
        if (num % i == 0)
        {
            cont++;
        }
        i++;
    }

    if (cont == 2)
    {
        cout << "El numero " << num << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << num << " no es primo" << endl;
    }

    return 0;
}
