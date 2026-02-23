#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cuenta;
    double saldoInicial, cargos, creditos, limiteCredito, nuevoSaldo;

    cout << fixed << setprecision(2);

    cout << "Introduzca el numero de cuenta (o -1 para salir): ";
    cin >> cuenta;

    while ( cuenta != -1 )
    {
        cout << "Introduzca el saldo inicial: ";
        cin >> saldoInicial;

        cout << "Introduzca los cargos totales: ";
        cin >> cargos;

        cout << "Introduzca los creditos totales: ";
        cin >> creditos;

        cout << "Introduzca el limite de credito: ";
        cin >> limiteCredito;

        nuevoSaldo = saldoInicial + cargos - creditos;

        cout << "El nuevo saldo es " << nuevoSaldo << endl;

        if ( nuevoSaldo > limiteCredito )
        {
            cout << "Cuenta:            " << cuenta        << endl;
            cout << "Limite de credito: " << limiteCredito << endl;
            cout << "Saldo:             " << nuevoSaldo    << endl;
            cout << "Se excedio el limite de su credito."  << endl;
        }

        cout << "\nIntroduzca el numero de cuenta (o -1 para salir): ";
        cin >> cuenta;
    }

    return 0;
}
