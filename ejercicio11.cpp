#include <iostream>
using namespace std;
int main()
{
    int valor;
    int contador = 0;
    int promedio = 0;
        while (valor == 0)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        if (valor == 0)
        {
            if (contador == 0)
            {
                cout << "No se encontraron valores para promediar.";
                break;
            }
            cout << "El promedio es: " << promedio / contador;
            break;
        }
        promedio += valor;
        contador++;
    }
    return 0;
}