#include <iostream>
using namespace std;

// a) Calcular la parte entera del cociente a / b
int cocienteEntero(int a, int b) {
    return a / b;  // división entera
}

// b) Calcular el residuo entero a % b
int residuoEntero(int a, int b) {
    return a % b;
}

// c) Función que imprime dígitos separados por dos espacios
void imprimirDigitos(int numero) {
    // Asumimos que numero está entre 1 y 32767
    // Encontrar la potencia de 10 más grande menor o igual al número
    int divisor = 1;
    while (divisor * 10 <= numero) {
        divisor *= 10;
    }
    // Extraer y mostrar cada dígito
    while (divisor > 0) {
        int digito = (numero / divisor) % 10;
        cout << digito;
        if (divisor > 1) cout << "  ";  // dos espacios entre dígitos
        divisor /= 10;
    }
    cout << endl;
}

int main() {
    // Ejemplo de uso
    int a = 4562;
    imprimirDigitos(a);  // Salida: 4  5  6  2

    // Demostración de partes a y b
    int x = 10, y = 3;
    cout << "Cociente entero de " << x << "/" << y << " = " << cocienteEntero(x, y) << endl;
    cout << "Residuo de " << x << "/" << y << " = " << residuoEntero(x, y) << endl;

    return 0;
}
