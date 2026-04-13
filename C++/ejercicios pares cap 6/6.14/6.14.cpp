#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Redondea al entero más cercano
int redondearAEntero(double numero) {
    return floor(numero + 0.5);
}

// Redondea a la décima más cercana (1 decimal)
double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

// Redondea a la centésima más cercana (2 decimales)
double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}

// Redondea a la milésima más cercana (3 decimales)
double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;
    cout << "Introduzca un número real: ";
    cin >> numero;

    cout << fixed << setprecision(4);
    cout << "\nValor original: " << numero << endl;
    cout << "Redondeado al entero más cercano: " << redondearAEntero(numero) << endl;
    cout << "Redondeado a la décima más cercana: " << redondearADecimas(numero) << endl;
    cout << "Redondeado a la centésima más cercana: " << redondearACentesimas(numero) << endl;
    cout << "Redondeado a la milésima más cercana: " << redondearAMilesimas(numero) << endl;

    return 0;
}
