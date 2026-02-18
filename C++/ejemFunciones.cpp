#include <iostream>
using namespace std;

int calcularPromedio (float totalGeneral, int numeroVeces);

int main(){
float totalInicial = 100+200;
int numeroVeces = 10;
cout << "Promedio General: " <<calcularPromedio(totalInicial, numeroVeces) << endl;
return 0;
}
int calcularPromedio(float totalGeneral, int numeroVeces)
{
    return totalGeneral/numeroVeces;
}
