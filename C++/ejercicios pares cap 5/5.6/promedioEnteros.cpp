#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int contador = 0;

    cout << "Ingrese una secuencia de enteros (termine con 9999): ";

    // Ciclo for que lee números hasta encontrar el centinela
    for (cin >> numero; numero != 9999; cin >> numero) {
        suma += numero;
        contador++;
    }

    if (contador != 0) {
        double promedio = static_cast<double>(suma) / contador;
        cout << "El promedio es: " << promedio << endl;
    } else {
        cout << "No se ingresaron números válidos." << endl;
    }

    return 0;
}
