#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    int terminos;

    cout << "Introduzca el valor de x: ";
    cin >> x;

    cout << "Introduzca la precision (numero de terminos): ";
    cin >> terminos;

    double resultado = 1.0;
    double potencia  = 1.0;
    long long factorial = 1;
    int contador = 1;

    while ( contador <= terminos )
    {
        potencia  *= x;
        factorial *= contador;
        resultado += potencia / factorial;
        ++contador;
    }

    cout << fixed << setprecision(6);
    cout << "e^" << x << " = " << resultado << endl;

    return 0;
}
