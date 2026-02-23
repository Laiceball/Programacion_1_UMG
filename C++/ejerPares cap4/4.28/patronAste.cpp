#include <iostream>
using namespace std;

int main()
{
    int fila = 1;

    while ( fila <= 8 )
    {
        int columna = 1;

        while ( columna <= 8 )
        {
            if ( ( fila + columna ) % 2 == 0 )
                cout << "* ";
            else
                cout << "  ";

            ++columna;
        }

        cout << endl;
        ++fila;
    }

    return 0;
}
