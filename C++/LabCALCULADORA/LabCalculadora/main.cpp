#include <iostream>
#include "calculadora.h"
using namespace std;

int main()
{
    Calculadora calc1;
    float resultado1 = 0.00;
    resultado1 = calc1.Suma(20, 30);
    cout << "El resultado es: " << resultado1;

    Calculadora calc2;
    float resultado2 = 0.00;
    resultado2 = calc2.Resta(20, 30);
    cout << "El resultado es: " << resultado2;

    Calculadora calc3;
    float resultado3 = 0.00;
    resultado3 = calc3.Multiplicacion(20, 30);
    cout << "El resultado es: " << resultado3;

    Calculadora calc4;
    float resultado4 = 0.00;
    resultado4 = calc4.Division(20, 30);
    cout << "El resultado es: " << resultado4;
    return 0;
}
