#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "Buque.h"
#include "Fragata.h"
#include "Bote.h"
using namespace std;

class Jugador{
    private:
        char M[10][10];
        bool P[10][10]={};
        Buque buque[2];
        Fragata fragata[3];
        Bote bote[3];
        string nombre;
    public:
        Jugador();
        bool perdio();
        void setNombre();
        string getNombre();
        void setBotes();
        void setFragatas();
        void setBuques();
        void mostrarBotes();
        void mostrarFragatas();
        void mostrarBuques();
        void atacado(int,int);
        void mostrarM();
};
#endif