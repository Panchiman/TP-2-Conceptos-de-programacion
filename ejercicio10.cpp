#include <iostream>
using namespace std;
int main()
{
    int numeroVentas = 0;
    int numeroVentasTotales = 0;
    while (numeroVentas >= 0)
    {
        cout << "Ingrese el monto de la venta: ";
        cin >> numeroVentas;
        if (numeroVentas < 0)
        {
            cout << "La suma de las ventas es: " << numeroVentasTotales;
            break;
        }
        numeroVentasTotales += numeroVentas;
    }
    return 0;
}