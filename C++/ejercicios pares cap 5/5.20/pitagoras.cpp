#include <iostream>
using namespace std;

int main() {
    cout << "Triples de Pitágoras (lado1 <= lado2 <= 500, hipotenusa <= 500):" << endl;
    for (int lado1 = 1; lado1 <= 500; ++lado1) {
        for (int lado2 = lado1; lado2 <= 500; ++lado2) { // lado2 >= lado1 para evitar duplicados
            for (int hip = 1; hip <= 500; ++hip) {
                if (lado1 * lado1 + lado2 * lado2 == hip * hip) {
                    cout << lado1 << ", " << lado2 << ", " << hip << endl;
                }
            }
        }
    }
    return 0;
}
