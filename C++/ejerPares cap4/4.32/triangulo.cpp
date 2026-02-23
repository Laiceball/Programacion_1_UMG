#include <iostream>
using namespace std;

int main()
{
    double lado1, lado2, lado3;

    cout << "Introduzca el primer lado: ";
    cin >> lado1;

    cout << "Introduzca el segundo lado: ";
    cin >> lado2;

    cout << "Introduzca el tercer lado: ";
    cin >> lado3;

    // Para formar un triangulo, la suma de dos lados siempre debe
    // ser mayor que el tercer lado
    if ( lado1 + lado2 > lado3 &&
         lado1 + lado3 > lado2 &&
         lado2 + lado3 > lado1 )
        cout << "Los valores pueden formar un triangulo." << endl;
    else
        cout << "Los valores no pueden formar un triangulo." << endl;

    return 0;
}
