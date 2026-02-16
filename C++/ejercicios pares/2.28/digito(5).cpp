#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un entero de cinco dígitos: ";
    cin >> numero;

    int digito1 = numero / 10000;
    int digito2 = (numero / 1000) % 10;
    int digito3 = (numero / 100) % 10;
    int digito4 = (numero / 10) % 10;
    int digito5 = numero % 10;

    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;

    return 0;
}
