#include <iostream>
using namespace std;
int main()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    for (char& letra : frase) {
        if (letra == 'a' || letra == 'A') {
            letra = 'b';
        }
    }
    cout << "la frase quedo como: " << frase << endl;

    return 0;
}