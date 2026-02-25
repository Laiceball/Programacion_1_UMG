#include <iostream>
using namespace std;

int main() {
    // Ciclo para los 12 días
    for (int dia = 1; dia <= 12; ++dia) {
        // Primer switch: imprime el número ordinal del día
        cout << "En el ";
        switch (dia) {
            case 1: cout << "primer"; break;
            case 2: cout << "segundo"; break;
            case 3: cout << "tercer"; break;
            case 4: cout << "cuarto"; break;
            case 5: cout << "quinto"; break;
            case 6: cout << "sexto"; break;
            case 7: cout << "séptimo"; break;
            case 8: cout << "octavo"; break;
            case 9: cout << "noveno"; break;
            case 10: cout << "décimo"; break;
            case 11: cout << "undécimo"; break;
            case 12: cout << "duodécimo"; break;
        }
        cout << " día de Navidad," << endl;
        cout << "mi verdadero amor me envió:" << endl;

        // Segundo switch: imprime los regalos (en orden descendente)
        // Se usa un ciclo para imprimir desde el día actual hasta el día 1
        for (int regalo = dia; regalo >= 1; --regalo) {
            switch (regalo) {
                case 12: cout << "Doce tamborileros tocando el tambor"; break;
                case 11: cout << "Once gaiteros tocando la gaita"; break;
                case 10: cout << "Diez señores saltando"; break;
                case 9: cout << "Nueve damas danzando"; break;
                case 8: cout << "Ocho sirvientas ordeñando"; break;
                case 7: cout << "Siete cisnes nadando"; break;
                case 6: cout << "Seis ocas empollando"; break;
                case 5: cout << "Cinco anillos de oro"; break;
                case 4: cout << "Cuatro pájaros cantores"; break;
                case 3: cout << "Tres gallinas francesas"; break;
                case 2: cout << "Dos tórtolas"; break;
                case 1:
                    if (dia == 1) {
                        cout << "Una perdiz en un peral";
                    } else {
                        cout << "Y una perdiz en un peral";
                    }
                    break;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
