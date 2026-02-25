#include <iostream>
#include <iomanip>
#include <cmath> // Para la función pow
using namespace std;

int main() {
    // Usuarios iniciales (en millones)
    double usuariosIniciales = 1000.0;
    double objetivo = 2500.0;

    // Tasas de crecimiento mensual (en decimal)
    double tasas[] = {0.02, 0.03, 0.04, 0.05};
    int numTasas = 4;

    cout << fixed << setprecision(0); // Mostrar números sin decimales (millones)
    cout << "Tasa mensual | Meses para alcanzar 2500M\n";


    // Probar cada tasa
    for (int i = 0; i < numTasas; ++i) {
        double tasa = tasas[i];
        double usuarios = usuariosIniciales;
        int meses = 0;

        // Mientras no se alcance el objetivo, seguir mes a mes
        while (usuarios < objetivo) {
            usuarios = usuariosIniciales * pow(1.0 + tasa, meses + 1);
            meses++;
        }

        // Mostrar resultado
        cout << setw(8) << (tasa * 100) << "%       | " << meses << endl;
    }

    return 0;
}
