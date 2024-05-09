#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int resp;
    int i = 1;
    cout << "Dime un numero: ";
    cin >> num;

    while (i <= 12)
    {
        resp = i*num;
        cout << i << " * " << num << " = " << resp << endl;
        i++;
    }
    
    
    return 0;
}
