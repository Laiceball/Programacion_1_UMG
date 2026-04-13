#include <iostream>
using namespace std;

// Función que determina si segundo es múltiplo del primero
bool multiple(int primero, int segundo) {
    return (primero != 0) && (segundo % primero == 0);
}

int main() {
    int a, b;
    cout << "Ingrese pares de enteros (0 0 para terminar):" << endl;
    while (true) {
        cout << "Primer entero: ";
        cin >> a;
        cout << "Segundo entero: ";
        cin >> b;
        if (a == 0 && b == 0) break;
        if (multiple(a, b))
            cout << b << " es múltiplo de " << a << endl;
        else
            cout << b << " NO es múltiplo de " << a << endl;
    }
    return 0;
}
