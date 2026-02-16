#include <iostream>
using namespace std;

int main () {
  double num1, num2;
  double suma, diferencia, producto, cociente;

  cout << " calculadora mini " << endl;
  cout << " Ingrese el primer numero a operar " << endl;
  cin >> num1;
  cout << "Ingresa el segundo número: ";
  cin >> num2;

  suma = num1 + num2;
  diferencia = num1 - num2;
  producto = num1 * num2;
  cociente = num1 / num2;

  cout << "Suma=: "<< suma << endl;
  cout << "Diferencia=: "<< diferencia << endl;
  cout << "Producto=: "<< producto << endl;
  cout << "Cociente=: "<< cociente << endl;

  return 0;
}
