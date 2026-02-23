#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int terminos;

    cout << "Introduzca la precision (numero de terminos): ";
    cin >> terminos;

    double e = 1.0;
    long long factorial = 1;
    int contador = 1;

    while ( contador <= terminos )
    {
        factorial *= contador;
        e += 1.0 / factorial;
        ++contador;
    }

    cout << fixed << setprecision(6);
    cout << "El valor estimado de e es: " << e << endl;

    return 0;
}
