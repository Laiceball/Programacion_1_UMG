#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Precios de los productos
    const double PRECIO1 = 2.98;
    const double PRECIO2 = 4.50;
    const double PRECIO3 = 9.98;
    const double PRECIO4 = 4.49;
    const double PRECIO5 = 6.87;

    // Acumuladores de ventas por producto
    double ventas1 = 0.0;
    double ventas2 = 0.0;
    double ventas3 = 0.0;
    double ventas4 = 0.0;
    double ventas5 = 0.0;

    int producto;
    int cantidad;

    cout << "Ingrese número de producto (1-5) y cantidad vendida." << endl;
    cout << "Para terminar, ingrese 0 como número de producto." << endl;

    while (true) {
        cout << "Número de producto: ";
        cin >> producto;
        if (producto == 0) {
            break;
        }
        if (producto < 1 || producto > 5) {
            cout << "Producto inválido. Debe ser entre 1 y 5." << endl;
            continue;
        }
        cout << "Cantidad vendida: ";
        cin >> cantidad;
        if (cantidad < 0) {
            cout << "La cantidad no puede ser negativa." << endl;
            continue;
        }

        // Acumular según el producto
        switch (producto) {
            case 1:
                ventas1 += cantidad * PRECIO1;
                break;
            case 2:
                ventas2 += cantidad * PRECIO2;
                break;
            case 3:
                ventas3 += cantidad * PRECIO3;
                break;
            case 4:
                ventas4 += cantidad * PRECIO4;
                break;
            case 5:
                ventas5 += cantidad * PRECIO5;
                break;
        }
    }

    // Mostrar resultados con formato de dos decimales
    cout << fixed << setprecision(2);
    cout << "\nResumen de ventas:" << endl;
    cout << "Producto 1: $" << ventas1 << endl;
    cout << "Producto 2: $" << ventas2 << endl;
    cout << "Producto 3: $" << ventas3 << endl;
    cout << "Producto 4: $" << ventas4 << endl;
    cout << "Producto 5: $" << ventas5 << endl;

    double total = ventas1 + ventas2 + ventas3 + ventas4 + ventas5;
    cout << "Total general: $" << total << endl;

    return 0;
}
