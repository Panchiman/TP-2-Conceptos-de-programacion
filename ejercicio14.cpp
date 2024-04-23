#include <iostream>
using namespace std;
int main()
{
    string frase;
    int contadordeA = 0;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    for (char letra : frase) {
        if (letra == 'a' || letra == 'A') {
            contadordeA++;
        }
    }
    cout << "La cantidad de letras 'a' en la frase ingresada es: " << contadordeA << endl;

    return 0;
}