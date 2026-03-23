#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class FrecuenciaCardiacas {
private:
    string primerNombre;
    string apellido;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
    int edad; // almacena la edad calculada

public:
    // Constructor
    FrecuenciaCardiacas(string nombre, string apellido, int dia, int mes, int anio) {
        primerNombre = nombre;
        this->apellido = apellido;
        diaNacimiento = dia;
        mesNacimiento = mes;
        anioNacimiento = anio;
        edad = -1;
    }

    // Setters y Getters
    void establecerPrimerNombre(string nombre) { primerNombre = nombre; }
    string obtenerPrimerNombre() { return primerNombre; }

    void establecerApellido(string apellido) { this->apellido = apellido; }
    string obtenerApellido() { return apellido; }

    void establecerDiaNacimiento(int dia) { diaNacimiento = dia; }
    int obtenerDiaNacimiento() { return diaNacimiento; }

    void establecerMesNacimiento(int mes) { mesNacimiento = mes; }
    int obtenerMesNacimiento() { return mesNacimiento; }

    void establecerAnioNacimiento(int anio) { anioNacimiento = anio; }
    int obtenerAnioNacimiento() { return anioNacimiento; }

    // Calcula la edad (solo la primera vez que se llama)
    int obtenerEdad() {
        if (edad != -1) return edad;

        int diaActual, mesActual, anioActual;
        cout << "Introduzca el dia actual: ";
        cin >> diaActual;
        cout << "Introduzca el mes actual: ";
        cin >> mesActual;
        cout << "Introduzca el anio actual: ";
        cin >> anioActual;

        edad = anioActual - anioNacimiento;
        if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
            edad--;
        }
        return edad;
    }

    // Frecuencia cardíaca máxima
    int obtenerFrecuenciaCardiacaMaxima() {
        return 220 - obtenerEdad(); // usa la edad ya calculada o la calcula una sola vez
    }

    // Devuelve el rango como string
    string obtenerFrecuenciaCardiacasEsperada() {
        int max = obtenerFrecuenciaCardiacaMaxima();
        int min = max * 0.5;
        int maxRango = max * 0.85;
        ostringstream oss;
        oss << min << " - " << maxRango << " pulsos por minuto";
        return oss.str();
    }
};

int main() {
    string nombre, apellido;
    int dia, mes, anio;

    cout << "Introduzca el primer nombre: ";
    cin >> nombre;
    cout << "Introduzca el apellido: ";
    cin >> apellido;
    cout << "Introduzca el dia de nacimiento: ";
    cin >> dia;
    cout << "Introduzca el mes de nacimiento: ";
    cin >> mes;
    cout << "Introduzca el anio de nacimiento: ";
    cin >> anio;

    FrecuenciaCardiacas persona(nombre, apellido, dia, mes, anio);

    cout << "\n--- Informacion de la persona ---" << endl;
    cout << "Nombre: " << persona.obtenerPrimerNombre() << " " << persona.obtenerApellido() << endl;
    cout << "Fecha de nacimiento: " << persona.obtenerDiaNacimiento() << "/" << persona.obtenerMesNacimiento() << "/" << persona.obtenerAnioNacimiento() << endl;

    int edad = persona.obtenerEdad();
    cout << "Edad: " << edad << " anos" << endl;
    cout << "Frecuencia cardiaca maxima: " << persona.obtenerFrecuenciaCardiacaMaxima() << " pulsos por minuto" << endl;
    cout << "Rango de frecuencia cardiaca esperada: " << persona.obtenerFrecuenciaCardiacasEsperada() << endl;

    return 0;
}
