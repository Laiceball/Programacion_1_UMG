#include <iostream>
using namespace std;

int suma(int x, int y) { return x + y; }
int resta(int x, int y) { return x - y; }
int multi(int x, int y) { return x * y; }
int divis(int x, int y) { return x / y; }
int modulo(int x, int y) { return x % y; }

int main() {
    int a, b;
    char op;
    char continuar;

    do {
        cout << "Ingrese primer numero: ";
        cin >> a;
        cout << "Ingrese segundo numero: ";
        cin >> b;
        cout << "Operacion (+, -, *, /, %): ";
        cin >> op;

        if (op == '+')
            cout << "Resultado: " << suma(a, b) << endl;
        else if (op == '-')
            cout << "Resultado: " << resta(a, b) << endl;
        else if (op == '*')
            cout << "Resultado: " << multi(a, b) << endl;
        else if (op == '/') {
            if (b != 0)
                cout << "Resultado: " << divis(a, b) << endl;
            else
                cout << "Error: division por cero" << endl;
        }
        else if (op == '%') {
            if (b != 0)
                cout << "Resultado: " << modulo(a, b) << endl;
            else
                cout << "Error: modulo por cero" << endl;
        }
        else
            cout << "Operacion no valida" << endl;

        cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
