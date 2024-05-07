#include <iostream>

using namespace std;

int contador ();
int main()
{
    contador();
}

int contador ()
{
    for (int i = 10; i >= 1; i--)
    {
        cout << "Ovejita # " << i << endl;
    }
}
