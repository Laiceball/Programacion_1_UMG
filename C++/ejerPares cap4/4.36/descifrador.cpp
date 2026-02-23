#include <iostream>
using namespace std;

int main()
{
    int numeroCifrado;

    cout << "Introduzca el numero cifrado de cuatro digitos: ";
    cin >> numeroCifrado;

    // Separar digitos
    int digito1 = numeroCifrado / 1000;
    int digito2 = ( numeroCifrado / 100 ) % 10;
    int digito3 = ( numeroCifrado / 10 )  % 10;
    int digito4 = numeroCifrado % 10;

    // Paso 1: revertir el intercambio
    int temp   = digito1;
    digito1    = digito3;
    digito3    = temp;

    temp       = digito2;
    digito2    = digito4;
    digito4    = temp;

    // Paso 2: revertir la suma (sumar 3 es equivalente a restar 7 en mod 10)
    digito1 = ( digito1 + 3 ) % 10;
    digito2 = ( digito2 + 3 ) % 10;
    digito3 = ( digito3 + 3 ) % 10;
    digito4 = ( digito4 + 3 ) % 10;

    cout << "Numero original: "
         << digito1 << digito2 << digito3 << digito4 << endl;

    return 0;
}
