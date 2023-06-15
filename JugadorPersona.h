#ifndef JUGADORPERSONA_H
#define JUGADORPERSONA_H
#include <iostream>
#include "Jugador.h"
#include "Barco.h"
using namespace std;

class JugadorPersona:public Jugador{
    private:
    Jugador persona;
    public:
        JugadorPersona();
        void mostrarM();
        void setBarcos();
        void setNombre();
        void atacado(int,int);
        bool perdio();
        string getNombre();
};
#endif