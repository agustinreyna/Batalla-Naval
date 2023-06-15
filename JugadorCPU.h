#ifndef JUGADORCPU_H
#define JUGADORCPU_H
#include <iostream>
#include "Jugador.h"
#include "Barco.h"
using namespace std;

class JugadorCPU:public Jugador{
    private:
    Jugador bot;
    public:
        JugadorCPU();
        void mostrarM();
        int setBarcos(int,int,int);
        void atacado(int,int);
        bool perdio();
        string getNombre();
};
#endif