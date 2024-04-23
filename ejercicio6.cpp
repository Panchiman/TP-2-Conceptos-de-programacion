#include <iostream>
using namespace std;
int main()
{
    int numeroVentas;
    int numeroVentasTotales = 0;
    while (numeroVentas != 0)
    {
        cout << "Ingrese el monto de la venta: ";
        cin >> numeroVentas;
        if (numeroVentas == 0)
        {
            cout << "La suma de las ventas es: " << numeroVentasTotales;
            break;
        }
        if (numeroVentas < 0)
        {
            cout << "Error el monto de la ultima venta fue negativo.";
        }
        else{
        numeroVentasTotales += numeroVentas;
        }
    }
    return 0;
}