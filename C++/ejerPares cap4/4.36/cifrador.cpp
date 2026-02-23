#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Introduzca un entero de cuatro digitos: ";
    cin >> numero;

    // Separar digitos
    int digito1 = numero / 1000;
    int digito2 = ( numero / 100 ) % 10;
    int digito3 = ( numero / 10 )  % 10;
    int digito4 = numero % 10;

    // Paso 1: sumar 7 y obtener residuo entre 10
    digito1 = ( digito1 + 7 ) % 10;
    digito2 = ( digito2 + 7 ) % 10;
    digito3 = ( digito3 + 7 ) % 10;
    digito4 = ( digito4 + 7 ) % 10;

    // Paso 2: intercambiar primero con tercero, segundo con cuarto
    int temp   = digito1;
    digito1    = digito3;
    digito3    = temp;

    temp       = digito2;
    digito2    = digito4;
    digito4    = temp;

    cout << "Numero cifrado: "
         << digito1 << digito2 << digito3 << digito4 << endl;

    return 0;
}
