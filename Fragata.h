#ifndef FRAGATA_H
#define FRAGATA_H
#include <iostream>
#include "Barco.h"
#include "Posicion.h"
using namespace std;

class Fragata:public Barco{
    private:
        Posicion posicion[2];
        int vidas;
        const int tamanio=2;
    public:
        Fragata();
        ~Fragata();
        int getVidas();
        void setPosicionH();
        void setPosicionV();
        void Atacado();
        void mostrar();
        int getF(int);
        int getC(int);
        void setDisparado(int);
        bool getDisparado(int);
};

#endif