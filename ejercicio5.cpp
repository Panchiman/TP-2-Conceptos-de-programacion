#include <iostream>
using namespace std;
int main()
{
    int contadorNumeros;
    int numero = 0;
    int nuevoNumero;
    cout << "Ingrese la cantidad de numeros que quiere sumar: ";
    cin >> contadorNumeros;

        for (int i = 0; i < contadorNumeros; i++)
        {
            cout << "Ingrese un numero para sumar: ";
            cin >> nuevoNumero;
            numero += nuevoNumero;
        }
        cout << "La suma de los numeros es: " << numero;
        
    
    return 0;
}