#include <iostream>
using namespace std;

int main() {
    int radio;
    const double PI = 3.14159;

    cout << "Ingrese el radio del circulo (entero): ";
    cin >> radio;

    cout << "Diametro: " << 2 * radio << endl;
    cout << "Circunferencia: " << 2 * PI * radio << endl;
    cout << "Area: " << PI * radio * radio << endl;

    return 0;
}
