#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int monto = 100000;
    const int FACTOR = 105;

    cout << "Anio" << setw(21) << "Monto en deposito" << endl;

    for (int anio = 1; anio <= 10; ++anio) {
        // Calcula el nuevo monto con redondeo al centavo más cercano
        monto = (monto * FACTOR + 50) / 100;

        // Separa dólares y centavos
        int dolares = monto / 100;
        int centavos = monto % 100;

        // Muestra el resultado con formato
        cout << setw(4) << anio << setw(21) << dolares << ".";
        if (centavos < 10)
            cout << "0";
        cout << centavos << endl;
    }
    return 0;
}
