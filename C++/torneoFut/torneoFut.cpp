#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    vector<string> equipos = {
        "Inter de Milan", "AC Milan", "Juventus", "Napoli",
        "AS Roma", "Atalanta", "Lazio", "Como 1907"
    };

    while (equipos.size() > 1) { //Mientras haya mas de 1 equipo, seguimoss jugando rondas
        vector<string> ganadores;

        for (int i = 0; i < equipos.size(); i+=2) {
            int g1 = rand() % 5; //MOD 5 para establecer un rango entre 0 a 4 goles
            int g2 = rand() % 5;

            if (g1 == g2) {
                cout << "Se decidio por penales\n";
                if (rand() % 2 == 0) g1++; //monedita virtual
                else g2++;
            }

            cout << equipos[i] << " " << g1 << " - " << g2 << " " << equipos[i+1] << "\n";

            if (g1 > g2) {
                cout << "Se lo lleva nuestro querido " << equipos[i] << "\n";
                ganadores.push_back(equipos[i]);
            } else {
                cout << "Merecida victoria para " << equipos[i+1] << "\n";
                ganadores.push_back(equipos[i+1]);
            }
        }

        equipos = ganadores;
        cout << "\n";
    }

    cout << "El Ganador del Titulo es: " << equipos[0] << "\n";

    return 0;
}
