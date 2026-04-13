#include <iostream>
#include <iomanip>
using namespace std;

// a) Fahrenheit a Centígrados
int centigrados(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;  // división entera
}

// b) Centígrados a Fahrenheit
int fahrenheit(int centigrados) {
    return (centigrados * 9 / 5) + 32;
}

// c) Programa que imprime tablas
int main() {
    cout << "=== Tabla de conversión: Centígrados -> Fahrenheit ===" << endl;
    cout << "Centígrados   Fahrenheit" << endl;
    for (int c = 0; c <= 100; c++) {
        cout << setw(5) << c << setw(12) << fahrenheit(c) << endl;
    }

    cout << "\n=== Tabla de conversión: Fahrenheit -> Centígrados ===" << endl;
    cout << "Fahrenheit   Centígrados" << endl;
    for (int f = 32; f <= 212; f++) {
        cout << setw(5) << f << setw(12) << centigrados(f) << endl;
    }
    return 0;
}
