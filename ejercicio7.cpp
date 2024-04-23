#include <iostream>
using namespace std;
int main()
{
    string nombre;
    string nombreMayor;
    int contadorLetras = 0;
    int contadorLetrasMayor = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un nombre: ";
        cin >> nombre;
        contadorLetras = nombre.length();
        if (contadorLetras >= contadorLetrasMayor)
        {
            contadorLetrasMayor = contadorLetras;
            nombreMayor = nombre;
        }
    }
    cout << "El nombre con la mayor cantidad de letras es: " << nombreMayor;
        
    return 0;
}