#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Función para convertir un entero a binario (como string)
string aBinario(int n) {
    if (n == 0) return "0";
    string bin = "";
    while (n > 0) {
        bin = (n % 2 == 0 ? "0" : "1") + bin;
        n /= 2;
    }
    return bin;
}

int main() {
    // Encabezados de la tabla
    cout << left << setw(10) << "Decimal"
         << setw(15) << "Binario"
         << setw(10) << "Octal"
         << setw(10) << "Hexadecimal" << endl;

    // Generar la tabla para los números del 1 al 256
    for (int num = 1; num <= 256; ++num) {
        // Mostrar decimal
        cout << left << setw(10) << num;

        // Mostrar binario (usando función propia)
        cout << setw(15) << aBinario(num);

        // Mostrar octal
        cout << oct;               // Cambia a formato octal
        cout << setw(10) << num;

        // Mostrar hexadecimal
        cout << hex;               // Cambia a formato hexadecimal
        cout << setw(10) << num;

        // Restaurar a decimal para la siguiente iteración
        cout << dec << endl;
    }

    return 0;
}
