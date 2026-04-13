#include <iostream>
using namespace std;

// Función que invierte los dígitos de un número entero
int invertirDigitos(int numero) {
    int invertido = 0;
    int signo = (numero < 0) ? -1 : 1;
    numero = abs(numero);
    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }
    return invertido * signo;
}

int main() {
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    cout << "Número invertido: " << invertirDigitos(num) << endl;
    return 0;
}
