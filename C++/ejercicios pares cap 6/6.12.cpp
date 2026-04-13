#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Función que calcula el cargo según las horas
double calcularCargos(double horas) {
    double cargo = 2.0; // mínimo por hasta 3 horas
    if (horas > 3.0) {
        cargo += ceil(horas - 3.0) * 0.5; // $0.50 por cada hora o fracción extra
    }
    if (cargo > 10.0) cargo = 10.0; // máximo $10
    return cargo;
}

int main() {
    double horas[3];
    double cargos[3];
    double totalHoras = 0.0, totalCargos = 0.0;

    // Entrada de datos para 3 clientes
    for (int i = 0; i < 3; i++) {
        cout << "Introduzca las horas estacionadas para el automóvil " << (i+1) << ": ";
        cin >> horas[i];
        cargos[i] = calcularCargos(horas[i]);
        totalHoras += horas[i];
        totalCargos += cargos[i];
    }

    // Salida en formato tabular
    cout << fixed << setprecision(1);
    cout << "\nAutomóvil   Horas   Cargo\n";
    for (int i = 0; i < 3; i++) {
        cout << setw(5) << (i+1) << setw(10) << horas[i] << setw(8) << cargos[i] << endl;
    }
    cout << "TOTAL" << setw(8) << totalHoras << setw(8) << totalCargos << endl;

    return 0;
}
