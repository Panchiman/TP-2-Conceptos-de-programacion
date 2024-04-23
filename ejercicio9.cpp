#include <iostream>
using namespace std;
int main()
{
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    cin >> cadena;
    cout << "La longitud de la cadena de texto ingresada es: " << cadena.length() << std::endl;
    for (char &c : cadena) {
        c = toupper(c);
    }
    
    cout << "String en mayusculas: " << cadena << std::endl;
    cout << "El ultimo caracter de la cadena es: " << cadena[cadena.length()-1] << std::endl;
    
    return 0;
}