#include <iostream>
using namespace std;

int main() {
    // Conjunto de valores de prueba para las variables
    int valoresX[] = {3, 5, 7};
    int valoresY[] = {6, 7, 8};
    int valoresA[] = {2, 2, 3};
    int valoresB[] = {2, 3, 3};
    int valoresG[] = {5, 4, 5};
    int valoresI[] = {3, 5, 6};
    int valoresJ[] = {5, 6, 7};

    cout << "Demostración de equivalencia usando leyes de De Morgan:\n\n";

    // Prueba para a)
    cout << "a) !(x<5) && !(y>=7)  vs  !((x<5) || (y>=7))\n";
    for (int i = 0; i < 3; i++) {
        int x = valoresX[i];
        int y = valoresY[i];
        bool expr1 = !(x < 5) && !(y >= 7);
        bool expr2 = !((x < 5) || (y >= 7));
        cout << "x=" << x << ", y=" << y << " -> " << expr1 << " == " << expr2 << " : " << (expr1 == expr2 ? "OK" : "ERROR") << endl;
    }

    // Prueba para b)
    cout << "\nb) !(a==b) || !(g!=5)  vs  !((a==b) && (g!=5))\n";
    for (int i = 0; i < 3; i++) {
        int a = valoresA[i];
        int b = valoresB[i];
        int g = valoresG[i];
        bool expr1 = !(a == b) || !(g != 5);
        bool expr2 = !((a == b) && (g != 5));
        cout << "a=" << a << ", b=" << b << ", g=" << g << " -> " << expr1 << " == " << expr2 << " : " << (expr1 == expr2 ? "OK" : "ERROR") << endl;
    }

    // Prueba para c)
    cout << "\nc) !(x<=8) && !(y>4)  vs  !((x<=8) || (y>4))\n";
    for (int i = 0; i < 3; i++) {
        int x = valoresX[i];
        int y = valoresY[i];
        bool expr1 = !(x <= 8) && !(y > 4);
        bool expr2 = !((x <= 8) || (y > 4));
        cout << "x=" << x << ", y=" << y << " -> " << expr1 << " == " << expr2 << " : " << (expr1 == expr2 ? "OK" : "ERROR") << endl;
    }

    // Prueba para d)
    cout << "\nd) !(i>4) || !(j<=6)  vs  !((i>4) && (j<=6))\n";
    for (int i = 0; i < 3; i++) {
        int i_val = valoresI[i];
        int j_val = valoresJ[i];
        bool expr1 = !(i_val > 4) || !(j_val <= 6);
        bool expr2 = !((i_val > 4) && (j_val <= 6));
        cout << "i=" << i_val << ", j=" << j_val << " -> " << expr1 << " == " << expr2 << " : " << (expr1 == expr2 ? "OK" : "ERROR") << endl;
    }

    return 0;
}
