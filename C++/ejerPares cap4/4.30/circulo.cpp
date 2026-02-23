#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double radio;

    cout << "Introduzca el radio del circulo: ";
    cin >> radio;

    double diametro      = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area          = PI * radio * radio;

    cout << fixed << setprecision(2);
    cout << "Diametro:      " << diametro       << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Area:          " << area           << endl;

    return 0;
}
