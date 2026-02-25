#include <iostream>
using namespace std;

int main (){
    int cantidad;
    cout << "Ingrese la cantidad de num deseada: " ;
    cin >> cantidad;

    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int minimo = numero;

    // Ciclo para los siguientes números
    for (int i = 1; i < cantidad; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero < minimo) {
            minimo = numero;
        }
    }

    cout << "El menor numero es: " << minimo << endl;
    return 0;

}
