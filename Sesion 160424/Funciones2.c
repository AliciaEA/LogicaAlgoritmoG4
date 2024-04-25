/*Leer la edad de una persona y decir si es niño <13,
joven >=13 <21, adulto*/

#include <stdio.h>

void evaluarEdad(int edad);

int main(int argc, char const *argv[])
{
    int op, edad;
    printf("1. Evaluar edad\n");
    printf("2. Salir\n");
    printf("opcion: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Dime tu edad: ");
        scanf("%d", &edad);
        evaluarEdad(edad);
        break;
    case 2:
        break;

    default:
        printf("Opcion invalida");
        break;
    }

    if (op != 2)
    {
        main(0, 0);
    }

    return 0;
}

void evaluarEdad(int edad)
{
    if (edad >= 0 && edad < 13)
        printf("Eres un niño... \n");
    else if (edad >= 13 && edad < 21)
        printf("Eres un joven \n");
    else if (edad >= 21)
        printf("Eres un viejo...\n");
    else
        printf("Edad invalida\n");
}