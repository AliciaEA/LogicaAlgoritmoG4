#include <iostream>

using namespace std;

void esPar (int num);

main(){
    int num;
    cout << "Introduce un numero: ";
    cin >> num;

    esPar(num);
}

void esPar (int num){
    if (num % 2 == 0){
        printf ("El numero es par");
    }
}
