#include <iostream>
using namespace std;

int main() {
    int radio;
    const double PI = 3.14159;

    cout << "ingrese el radio del circulo (entero): ";
    cin >> radio;

    cout << "diametro: " << 2 * radio << endl;
    cout << "circunferencia: " << 2 * PI * radio << endl;
    cout << "area: " << PI * radio * radio << endl;

    return 0;
}
