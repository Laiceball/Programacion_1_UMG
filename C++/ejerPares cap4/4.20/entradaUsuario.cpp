#include <iostream>
using namespace std;

int main()
{
    int aprobados = 0;
    int reprobados = 0;
    int contador = 1;
    int respuesta;

    while ( contador <= 10 )
    {
        cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
        cin >> respuesta;

        // Validacion: sigue pidiendo hasta que sea 1 o 2
        while ( respuesta != 1 && respuesta != 2 )
        {
            cout << "Valor invalido. Escriba 1 para aprobado o 2 para reprobado: ";
            cin >> respuesta;
        }

        if ( respuesta == 1 )
            ++aprobados;
        else
            ++reprobados;

        ++contador;
    }

    cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;

    if ( aprobados > 8 )
        cout << "Bono para el instructor" << endl;

    return 0;
}
