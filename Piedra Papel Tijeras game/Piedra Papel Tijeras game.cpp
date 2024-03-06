// Piedra Papel Tijeras game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Jugador.h"
using namespace std;

int p1, p2;
void evaluar(int jug1, int jug2)
{
    p1 = 0;
    p2 = 0;
    if (jug1 == jug2)
    {
        cout << "Empate" << endl;

    }
    else
    {
        if ((jug1 == 1 and jug2 == 2) or (jug1 == 3 and jug2 == 1))
        {
            p1 += 1;
            cout << "El ganador es el Jugador 1" << endl;
        }
        else if ((jug1 == 2 and jug2 == 1) or (jug1 == 1 and jug2 == 3))
        {
            p2 += 1;
            cout << "El ganador es el Jugador 2" << endl;
        }
        else if (jug1 == 2 and jug2 == 3)
        {
            p1 += 1;
            cout << "El ganador es el Jugador 1" << endl;
        }
        else if (jug1 == 3 and jug2 == 2)
        {
            p2 += 1;
            cout << "El ganador es el Jugador 2" << endl;
        }
    }
    cout << "Puntaje 1: " << p1 << endl;
    cout << "Puntaje 2: " << p2 << endl;
}

int op1, op2;
int main()
{

    Jugador j1;
    Jugador j2;
    do
    {
        op1 = j1.seleccionar();
        op2 = j2.seleccionar();
        if (op1 != 0 or op2 != 0)
        {
            evaluar(op1, op2);
        }
        cout << endl;
    } while (op1 != 0 and op2 != 0);

    cout << "Salio del Juego" << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
