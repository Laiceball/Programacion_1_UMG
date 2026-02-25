#include <iostream>
using namespace std;

int main() {
    for (int fila = 1; fila <= 5; fila++) {
        // Patrón A:
        for (int col = 1; col <= fila; col++) {
            cout << '*';
        }
        // Espacios para separar columnas
        cout << "  ";

        // Patrón B
        for (int col = 1; col <= 6 - fila; col++) {
            cout << '*';
        }
        cout << "  ";

        // Patrón C
        for (int espacio = 1; espacio <= 5 - fila; espacio++) {
            cout << ' ';
        }
        for (int col = 1; col <= fila; col++) {
            cout << '*';
        }
        cout << "  ";

        // Patrón D
        for (int espacio = 1; espacio <= fila - 1; espacio++) {
            cout << ' ';
        }
        for (int col = 1; col <= 6 - fila; col++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
