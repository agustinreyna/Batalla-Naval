#ifndef BOTE_H
#define BOTE_H
#include <iostream>
#include "Barco.h"
#include "Posicion.h"
using namespace std;

class Bote:public Barco{
    private:
        Posicion posicion[1];
        int vidas;
        const int tamanio=1;
    public:
        Bote();
        ~Bote();
        int getVidas();
        void setPosicion();
        void Atacado();
        void mostrar();
        int getF();
        int getC();
        void setDisparado();
        bool getDisparado();
};
#endif