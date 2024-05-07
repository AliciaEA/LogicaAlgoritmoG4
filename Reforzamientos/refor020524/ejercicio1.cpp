/*Mostrar un mensaje contando 10 ovejas*/

#include <iostream>

using namespace std;

int contador();

int main()
{
    contador();
}

int contador()
{
    for (int alicia = 1; alicia <= 10 ; alicia++)
    {
        cout << "Ovejita # " << alicia <<endl;
    }
}
