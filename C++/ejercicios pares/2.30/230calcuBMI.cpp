#include <iostream>
using namespace std;

int main() {
    int opcion;
    double peso, altura, bmi;

    cout << "Calculadora de Indice de Masa Corporal (BMI)" << endl;
    cout << "Elige el sistema:" << endl;
    cout << "1. Libras y pulgadas" << endl;
    cout << "2. Kilogramos y metros" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Peso en libras: ";
        cin >> peso;
        cout << "Altura en pulgadas: ";
        cin >> altura;
        bmi = (peso * 703) / (altura * altura);
    } else if (opcion == 2) {
        cout << "Peso en kilogramos: ";
        cin >> peso;
        cout << "Altura en metros: ";
        cin >> altura;
        bmi = peso / (altura * altura);
    } else {
        cout << "Opcion no valida." << endl;
        return 0;
    }

    cout << "\nTu BMI es: " << bmi << endl;
    cout << "\nCategorias:" << endl;
    cout << "Bajo peso: < 18.5" << endl;
    cout << "Normal: 18.5 - 24.9" << endl;
    cout << "Sobrepeso: 25 - 29.9" << endl;
    cout << "Obeso: >= 30" << endl;

    return 0;
}
