#include <iostream>
#include <string>
using namespace std;

class Cuenta {
private:
    int saldo;

public:
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            cout << "Error: Saldo inicial invalido. Se establecio en 0." << endl;
        }
    }

    void abonar(int monto) {
        if (monto > 0) {
            saldo += monto;
        }
    }

    void cargar(int monto) {
        if (monto <= saldo) {
            saldo -= monto;
        } else {
            cout << "El monto a cargar excede el saldo de la cuenta." << endl;
        }
    }

    int obtenerSaldo() {
        return saldo;
    }
};

int main() {
    Cuenta cuenta1(500);
    Cuenta cuenta2(-100);

    cout << "Saldo cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cout << "Saldo cuenta2: " << cuenta2.obtenerSaldo() << endl;

    cuenta1.abonar(200);
    cout << "Saldo cuenta1 despues de abonar 200: " << cuenta1.obtenerSaldo() << endl;

    cuenta1.cargar(1000);
    cout << "Saldo cuenta1 despues de intentar cargar 1000: " << cuenta1.obtenerSaldo() << endl;

    cuenta1.cargar(300);
    cout << "Saldo cuenta1 despues de cargar 300: " << cuenta1.obtenerSaldo() << endl;

    return 0;
}
