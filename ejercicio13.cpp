#include <iostream>
using namespace std;
int main()
{
    int numero;
    while (numero != -1)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        int contadorImpares = 0;
        int contadorPares = 0;
        int contadordeCincos = 0;
        if (numero == -1){
            break;
        }

        string numeroStr = to_string(numero);
        for (char digito : numeroStr) {
            int digitoInt = digito - '0';
            if (digitoInt == 5)
            {
                contadordeCincos++;
            }
            if (digitoInt % 2 == 0)
            {
                contadorPares++;
            }
            else
            {
                contadorImpares++;
            }
        }

        cout << "Cantidad de numeros pares: " << contadorPares << endl;
        cout << "Cantidad de numeros impares: " << contadorImpares << endl;
        cout << "Cantidad de cincos: " << contadordeCincos << endl;

    }
    return 0;
}