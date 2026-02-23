#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;

    cout << "Introduzca un entero no negativo: ";
    cin >> n;

    int contador = 1;
    while ( contador <= n )
    {
        factorial *= contador;
        ++contador;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
