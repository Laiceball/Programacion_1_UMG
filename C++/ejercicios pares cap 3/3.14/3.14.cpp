#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string primerNombre;
    string apellidoPaterno;
    int salarioMensual;

public:
    Empleado(string nombre, string apellido, int salario) {
        primerNombre = nombre;
        apellidoPaterno = apellido;
        if (salario > 0) {
            salarioMensual = salario;
        } else {
            salarioMensual = 0;
        }
    }

    void establecerPrimerNombre(string nombre) {
        primerNombre = nombre;
    }

    string obtenerPrimerNombre() {
        return primerNombre;
    }

    void establecerApellidoPaterno(string apellido) {
        apellidoPaterno = apellido;
    }

    string obtenerApellidoPaterno() {
        return apellidoPaterno;
    }

    void establecerSalarioMensual(int salario) {
        if (salario > 0) {
            salarioMensual = salario;
        } else {
            salarioMensual = 0;
        }
    }

    int obtenerSalarioMensual() {
        return salarioMensual;
    }

    int obtenerSalarioAnual() {
        return salarioMensual * 12;
    }

    void aumentarSalario(int porcentaje) {
        salarioMensual += (salarioMensual * porcentaje / 100);
    }
};

int main() {
    Empleado empleado1("Juan", "Perez", 3000);
    Empleado empleado2("Maria", "Gomez", 2500);

    cout << "Salario anual de " << empleado1.obtenerPrimerNombre() << " " << empleado1.obtenerApellidoPaterno() << ": " << empleado1.obtenerSalarioAnual() << endl;
    cout << "Salario anual de " << empleado2.obtenerPrimerNombre() << " " << empleado2.obtenerApellidoPaterno() << ": " << empleado2.obtenerSalarioAnual() << endl;

    empleado1.aumentarSalario(10);
    empleado2.aumentarSalario(10);

    cout << "\nDespues del aumento del 10%:" << endl;
    cout << "Salario anual de " << empleado1.obtenerPrimerNombre() << " " << empleado1.obtenerApellidoPaterno() << ": " << empleado1.obtenerSalarioAnual() << endl;
    cout << "Salario anual de " << empleado2.obtenerPrimerNombre() << " " << empleado2.obtenerApellidoPaterno() << ": " << empleado2.obtenerSalarioAnual() << endl;

    return 0;
}
