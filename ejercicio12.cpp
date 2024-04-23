#include <iostream>
using namespace std;
int main()
{
    int numAlumno;
    int notaAlumno = 0;
    int contadorAprobados = 0;
    int contadorDesaprobados = 0;
    while (numAlumno != 0)
    {
        cout << "Ingrese el numero de Alumno: ";
        cin >> numAlumno;
        if (numAlumno == 0)
        {
            cout << "Cantidad de aprobados: " << contadorAprobados << endl;
            cout << "Cantidad de desaprobados: " << contadorDesaprobados << endl;
            break;
        }
        cout << "Ingrese la nota del alumno: ";
        cin >> notaAlumno;
        if (notaAlumno > 4)
        {
            contadorAprobados++;
        }
        else
        {
            contadorDesaprobados++;
        }
    }
    return 0;
}