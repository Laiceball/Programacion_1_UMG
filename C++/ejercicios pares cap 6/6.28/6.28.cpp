#include <iostream>
#include <cmath>
using namespace std;

// Función que determina si un número es perfecto
bool esPerfecto(int numero) {
    if (numero <= 1) return false;
    int suma = 1; // 1 siempre es divisor (excepto para el 1, que ya se descartó)
    // Se busca hasta la raíz cuadrada
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            suma += i;
            if (i != numero / i) // Evita sumar el mismo divisor dos veces (cuadrados perfectos)
                suma += numero / i;
        }
    }
    return suma == numero;
}

// Función para imprimir los divisores del número perfecto
void imprimirDivisores(int numero) {
    cout << "Divisores: 1";
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0)
            cout << ", " << i;
    }
    cout << endl;
}

int main() {
    cout << "Números perfectos entre 1 y 1000:" << endl;
    for (int i = 1; i <= 1000; i++) {
        if (esPerfecto(i)) {
            cout << i << " es perfecto. ";
            imprimirDivisores(i);
        }
    }

    // Prueba con números más grandes (hasta 10000)
    cout << "\nProbando hasta 10000:" << endl;
    for (int i = 1; i <= 10000; i++) {
        if (esPerfecto(i)) {
            cout << i << " es perfecto." << endl;
        }
    }
    return 0;
}
