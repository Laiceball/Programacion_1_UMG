#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double horasTrabajadas, tarifaPorHora, salario;

    cout << fixed << setprecision(2);

    cout << "Introduzca las horas trabajadas (-1 para salir): ";
    cin >> horasTrabajadas;

    while ( horasTrabajadas != -1 )
    {
        cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
        cin >> tarifaPorHora;

        if ( horasTrabajadas <= 40 )
            salario = horasTrabajadas * tarifaPorHora;
        else
            salario = 40 * tarifaPorHora + ( horasTrabajadas - 40 ) * tarifaPorHora * 1.5;

        cout << "El salario es $" << salario << endl;

        cout << "\nIntroduzca las horas trabajadas (-1 para salir): ";
        cin >> horasTrabajadas;
    }

    return 0;
}
