#include <iostream>
using namespace std;

int main () {
    int ent1, ent2;

    cout << "Escriba dos numeros enteros: " << endl;
    cin >> ent1 >> ent2;

    if (ent1 > ent2){
        cout << ent1 << " es más grande" << endl;
    } else if (ent1 < ent2) {
        cout << ent2 << " es más grande" << endl;
    } else {
        cout << "los numeros son iguales ;) "<< endl;
    }

    return 0;
}
