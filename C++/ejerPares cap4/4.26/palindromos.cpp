#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Introduzca un entero de cinco digitos: ";
    cin >> numero;

    // Separar los digitos
    int digito1 = numero / 10000;
    int digito2 = ( numero / 1000 ) % 10;
    int digito3 = ( numero / 100 )  % 10;
    int digito4 = ( numero / 10 )   % 10;
    int digito5 = numero % 10;

    cout << "Los digitos son: " << digito1 << " " << digito2 << " "
         << digito3 << " " << digito4 << " " << digito5 << endl;

    if ( digito1 == digito5 && digito2 == digito4 )
        cout << numero << " es un palindromo." << endl;
    else
        cout << numero << " no es un palindromo." << endl;

    return 0;
}
