#include <iostream>
using namespace std;
int main()
{
    int numero;
    int numeroDoble;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    numeroDoble = numero * 2;
    if ( numero % 2 == 0)
        while (numeroDoble >= numero)
        {
            cout << numero;
            numero+=2;
        }
    else
    while (numeroDoble >= numero)
    {
        cout << numero;
        numero++;
    }
    
    return 0;
}