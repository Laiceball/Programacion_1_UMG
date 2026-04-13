#include <iostream>
using namespace std;

// Función que calcula base^exponente (exponente entero positivo)
int enteroPotencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

// Ejemplo de uso
int main() {
    cout << enteroPotencia(3, 4) << endl;  // Imprime 81
    cout << enteroPotencia(2, 5) << endl;  // Imprime 32
    return 0;
}
