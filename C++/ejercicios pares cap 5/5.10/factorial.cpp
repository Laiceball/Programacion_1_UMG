#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Encabezado de la tabla
    cout << "Numero" << setw(10) << "Factorial" << endl;

    // Calcular factorial para n = 1 a 5
    for (int n = 1; n <= 5; n++) {
        long long factorial = 1;
        // Multiplicar desde 1 hasta n
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << n << setw(10) << factorial << endl;
    }

    return 0;
}
