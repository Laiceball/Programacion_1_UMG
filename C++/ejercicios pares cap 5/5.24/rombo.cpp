#include <iostream>
using namespace std;

int main() {
    int filas;
    cout << "Ingrese un número impar entre 1 y 19: ";
    cin >> filas;

    // Validar que el número sea impar y esté en el rango permitido
    if (filas < 1 || filas > 19 || filas % 2 == 0) {
        cout << "Error: debe ser un número impar entre 1 y 19." << endl;
        return 1;
    }

    int mitad = (filas + 1) / 2; // Cantidad de filas en la mitad superior (incluye la fila central)

    // Parte superior del rombo (desde la fila 1 hasta la fila central)
    for (int i = 1; i <= mitad; i++) {
        // Espacios en blanco para centrar
        for (int j = 1; j <= mitad - i; j++) {
            cout << ' ';
        }
        // Asteriscos: 2*i - 1
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << '*';
        }
        cout << endl;
    }

    // Parte inferior del rombo (desde la fila central-1 hasta la primera)
    for (int i = mitad - 1; i >= 1; i--) {
        // Espacios en blanco
        for (int j = 1; j <= mitad - i; j++) {
            cout << ' ';
        }
        // Asteriscos: 2*i - 1
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
