#include "Jugador.h"
#include <iostream>
using namespace std;
int Jugador::getpuntaje1()
{
    return puntaje1;
}

void Jugador::setpuntaje1()
{
    puntaje1 += 1;
    cout << "El puntaje actual es: " << puntaje1;
}

Jugador::Jugador()
{
    opcion1 = 0;
    puntaje1 = 0;
}
int op;
int Jugador::seleccionar()
{
    cout << "Seleccione una opción: " << endl;
    cout << "Piedra: (1)" << endl;
    cout << "Papel: (2)" << endl;
    cout << "Tijera (3)" << endl;
    cout << "Salir (0)" << endl;
    cin >> op;
    return op;
}
