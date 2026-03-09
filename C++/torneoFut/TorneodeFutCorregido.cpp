#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define NUMERO_EQUIPOS         6
#define NUMERO_JORNADAS        5
#define NUMERO_GRUPOS          3
#define GOLES_MAX              5
#define GOLES_MIN              0
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1]);
void imprimirLinea();
float imprimirMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1],
                     char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA],
                     string nombreGrupo);

int main()
{
    srand(getpid());
    llamaCiclo();
    return 0;
}

void llamaCiclo()
{
    int matriz_grupo_a[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1];
    int matriz_grupo_b[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1];
    int matriz_grupo_c[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1];

    char grupo_a[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {
        "Inter de Milan", "AC Milan", "Juventus",
        "Napoli", "Como 1907", "AS Roma"
    };
    char grupo_b[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {
        "Atalanta", "Lazio", "Fiorentina",
        "Bologna", "Torino", "Udinese"
    };
    char grupo_c[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {
        "Monza", "Genoa", "Parma",
        "Cagliari", "Empoli", "Hellas Verona"
    };

    char opcion;
    bool repetir = true;
    float promedio_grupo_a, promedio_grupo_b, promedio_grupo_c;

    do
    {
        system("cls");

        promedio_grupo_a = 0;
        promedio_grupo_b = 0;
        promedio_grupo_c = 0;

        cout << "*** Torneo Serie A - Fase de Grupos ***" << endl << endl;

        llenarMatriz(matriz_grupo_a);
        promedio_grupo_a = imprimirMatriz(matriz_grupo_a, grupo_a, "GRUPO A");

        llenarMatriz(matriz_grupo_b);
        promedio_grupo_b = imprimirMatriz(matriz_grupo_b, grupo_b, "GRUPO B");

        llenarMatriz(matriz_grupo_c);
        promedio_grupo_c = imprimirMatriz(matriz_grupo_c, grupo_c, "GRUPO C");

        if (promedio_grupo_a > promedio_grupo_b && promedio_grupo_a > promedio_grupo_c)
        {
            cout << " El grupo con mejor promedio es: GRUPO A  Promedio: " << fixed << setprecision(2) << promedio_grupo_a << endl;
        }
        else if (promedio_grupo_b > promedio_grupo_a && promedio_grupo_b > promedio_grupo_c)
        {
            cout << " El grupo con mejor promedio es: GRUPO B  Promedio: " << fixed << setprecision(2) << promedio_grupo_b << endl;
        }
        else if (promedio_grupo_c > promedio_grupo_a && promedio_grupo_c > promedio_grupo_b)
        {
            cout << " El grupo con mejor promedio es: GRUPO C  Promedio: " << fixed << setprecision(2) << promedio_grupo_c << endl;
        }
        else
        {
            cout << " Algunos grupos tienen el mismo promedio de puntos." << endl;
        }

        cout << endl << "Desea otra simulacion (s/n)? ";
        cin >> opcion;

        if (opcion == 'n')
            repetir = false;

    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1])
{
    for (int i = 0; i < NUMERO_EQUIPOS; i++)
        for (int j = 0; j <= NUMERO_JORNADAS; j++)
            matriz[i][j] = 0;

    int emparejamiento[NUMERO_EQUIPOS] = {0, 1, 2, 3, 4, 5};

    for (int j = 0; j < NUMERO_JORNADAS; j++)
    {
        for (int i = NUMERO_EQUIPOS - 1; i > 0; i--)
        {
            int r = busquedaAleatorios(0, i);
            int tmp = emparejamiento[i];
            emparejamiento[i] = emparejamiento[r];
            emparejamiento[r] = tmp;
        }

        for (int p = 0; p < 3; p++)
        {
            int local     = emparejamiento[p * 2];
            int visitante = emparejamiento[p * 2 + 1];

            int goles_local     = busquedaAleatorios(GOLES_MIN, GOLES_MAX);
            int goles_visitante = busquedaAleatorios(GOLES_MIN, GOLES_MAX);

            // Guardar puntos por jornada
            if (goles_local > goles_visitante)
            {
                matriz[local][j]     = 3;
                matriz[visitante][j] = 0;
                matriz[local][NUMERO_JORNADAS]     += 3;
            }
            else if (goles_local == goles_visitante)
            {
                matriz[local][j]     = 1;
                matriz[visitante][j] = 1;
                matriz[local][NUMERO_JORNADAS]     += 1;
                matriz[visitante][NUMERO_JORNADAS] += 1;
            }
            else
            {
                matriz[local][j]     = 0;
                matriz[visitante][j] = 3;
                matriz[visitante][NUMERO_JORNADAS] += 3;
            }
        }
    }
}

void imprimirLinea()
{
    cout << "+---------------------";
    for (int x = 0; x < NUMERO_JORNADAS + 1; x++)
        cout << "+--------";
    cout << "+" << endl;
}

float imprimirMatriz(int matriz[NUMERO_EQUIPOS][NUMERO_JORNADAS + 1],
                     char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA],
                     string nombreGrupo)
{
    int   puntosMayor = matriz[0][NUMERO_JORNADAS];
    int   puntosMenor = matriz[0][NUMERO_JORNADAS];
    float totalPuntos = 0;
    float promedioGeneral = 0;
    char  equipoMayor[MAXIMA_LONGITUD_CADENA];
    char  equipoMenor[MAXIMA_LONGITUD_CADENA];

    memcpy(equipoMayor, equipos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoMenor, equipos[0], MAXIMA_LONGITUD_CADENA);

    cout << nombreGrupo << endl;
    cout << "(J1-J5) Puntos por Jornada  |  PTS = Puntos acumulados" << endl;
    imprimirLinea();

    cout << setw(22) << left << "| Equipo";
    for (int j = 0; j < NUMERO_JORNADAS; j++)
        cout << "| J" << j+1 << "    ";
    cout << "| PTS    |" << endl;

    imprimirLinea();

    for (int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        cout << "| " << setw(20) << left << equipos[i];

        for (int j = 0; j < NUMERO_JORNADAS; j++)
            cout << "| " << setw(6) << matriz[i][j] << " ";

        int pts = matriz[i][NUMERO_JORNADAS];
        cout << "| " << setw(6) << pts << " |" << endl;

        totalPuntos += pts;

        if (pts > puntosMayor)
        {
            puntosMayor = pts;
            memcpy(equipoMayor, equipos[i], MAXIMA_LONGITUD_CADENA);
        }
        if (pts < puntosMenor)
        {
            puntosMenor = pts;
            memcpy(equipoMenor, equipos[i], MAXIMA_LONGITUD_CADENA);
        }

        imprimirLinea();
    }

    promedioGeneral = totalPuntos / NUMERO_EQUIPOS;

    cout << " Lider       : " << setw(20) << equipoMayor << " Puntos: " << puntosMayor << endl;
    cout << " Ultimo      : " << setw(20) << equipoMenor << " Puntos: " << puntosMenor << endl;
    cout << " Prom. grupo : " << fixed << setprecision(2) << promedioGeneral << " pts" << endl << endl;

    return promedioGeneral;
}

