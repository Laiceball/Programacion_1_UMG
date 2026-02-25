#include <iostream>
using namespace std;

int main() {
    unsigned int respuestasCorrectas = 0;
    unsigned int respuesta;

    cout << "=== EXAMEN SOBRE CALENTAMIENTO GLOBAL ===\n\n";

    // Pregunta 1
    cout << "Pregunta 1: Que es el calentamiento global?\n";
    cout << "1. El aumento de la temperatura solo en verano\n";
    cout << "2. El aumento gradual de la temperatura promedio del planeta debido a la acumulacion de gases de efecto invernadero\n";
    cout << "3. Un fenomeno causado exclusivamente por la actividad volcanica\n";
    cout << "4. El enfriamiento de la atmosfera terrestre\n";
    cout << "Su respuesta (1-4): ";
    cin >> respuesta;
    if (respuesta == 2)
        respuestasCorrectas++;

    // Pregunta 2
    cout << "\nPregunta 2: Cual es la principal causa del calentamiento global actual?\n";
    cout << "1. Los ciclos naturales del Sol\n";
    cout << "2. La quema de combustibles fosiles como carbon, petroleo y gas natural\n";
    cout << "3. La disminucion de la capa de ozono\n";
    cout << "4. El aumento de la poblacion de animales\n";
    cout << "Su respuesta (1-4): ";
    cin >> respuesta;
    if (respuesta == 2)
        respuestasCorrectas++;

    // Pregunta 3
    cout << "\nPregunta 3: Cual de los siguientes es el gas de efecto invernadero mas abundante emitido por actividades humanas?\n";
    cout << "1. Oxigeno (O₂)\n";
    cout << "2. Nitrogeno (N₂)\n";
    cout << "3. Dioxido de carbono (CO₂)\n";
    cout << "4. Vapor de agua (H₂O)\n";
    cout << "Su respuesta (1-4): ";
    cin >> respuesta;
    if (respuesta == 3)
        respuestasCorrectas++;

    // Pregunta 4
    cout << "\nPregunta 4: Que porcentaje del dioxido de carbono emitido por actividades humanas es absorbido por los oceanos?\n";
    cout << "1. Aproximadamente una cuarta parte\n";
    cout << "2. La mitad\n";
    cout << "3. Casi todo\n";
    cout << "4. Ninguno, los oceanos no absorben CO₂\n";
    cout << "Su respuesta (1-4): ";
    cin >> respuesta;
    if (respuesta == 1)
        respuestasCorrectas++;

    // Pregunta 5
    cout << "\nPregunta 5: Que acuerdo internacional busca limitar el calentamiento global a 1.5°C para 2040?\n";
    cout << "1. Protocolo de Montreal\n";
    cout << "2. Acuerdo de Paris\n";
    cout << "3. Protocolo de Kioto\n";
    cout << "4. Declaracion de Rio\n";
    cout << "Su respuesta (1-4): ";
    cin >> respuesta;
    if (respuesta == 2)
        respuestasCorrectas++;

    // Resultados
    cout << "\n========================================\n";
    cout << "Usted obtuvo " << respuestasCorrectas << " respuestas correctas de 5.\n";

    if (respuestasCorrectas == 5) {
        cout << "Excelente!\n";
    }
    else if (respuestasCorrectas == 4) {
        cout << "Muy bien.\n";
    }
    else {
        cout << "Es tiempo de aprender mas sobre el calentamiento global.\n";
        cout << "Puede visitar los siguientes sitios web para informarse:\n";
        cout << "- NASA Climate: climate.nasa.gov\n";
        cout << "- NOAA Climate.gov: www.climate.gov\n";
        cout << "- NRDC: www.nrdc.org/es\n";
    }

    return 0;
}
