#ifndef BUQUE_H
#define BUQUE_H
#include <iostream>
#include "Barco.h"
#include "Posicion.h"
using namespace std;

class Buque:public Barco{
    private:
        bool p[10][10];
        Posicion posicion[3];
        int vidas;
        const int tamanio=3;
    public:
        Buque();
        ~Buque();
        int getVidas();
        void setPosicionH(bool[10][10]);
        void setPosicionV(bool[10][10]);
        void Atacado();
        void mostrar();
        int getF(int);
        int getC(int);
        void setDisparado(int);
        bool getDisparado(int);
};

#endif