#include <iostream>
using namespace std;
int main()
{
    char letra;
    while (letra != 's' || letra != 'n')
    {
        cout << "Ingrese un solo caracter: ";
        cin >> letra;
        letra = tolower(letra);
        if (letra == 's')
        {
            cout << "usted eligio SI.";
            break;
        }
        if (letra == 'n')
        {
            cout << "usted eligio NO.";
            break;
        }
    }
    return 0;
}