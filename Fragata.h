#ifndef FRAGATA_H
#define FRAGATA_H
#include <iostream>
#include "Barco.h"
#include "Posicion.h"
using namespace std;

class Fragata:public Barco{
    private:
        Posicion posicion[2];//COMO LA FRAGATA ES MAS GRANDE QUE EL BOTE OCUPA 2 POSICIONES QUE PUEDEN SER HORIZONTALES O VERTICALES
        int vidas;
    public:
        Fragata();
        ~Fragata();
        int getVidas();
        void setPosicionH(bool[10][10]);//SETEA LA POSICION HORIZONTAL DE LA FRAGATA
        void setPosicionV(bool[10][10]);//SETEA LA POSICION VERTICAL DE LA FRAGATA 
        void Atacado();//SE LE RESTAN VIDAS A LA FRAGATA
        void mostrar();//SE MUESTRA LAS POSICIONES DE LA FRAGATA
        int getF(int);//EL PARAMETRO ES USADO PARA SELECCIONAR LA POSICION
        int getC(int);//EL PARAMETRO ES USADO PARA SELECCIONAR LA POSICION
        void setDisparado(int);
        bool getDisparado(int);
};

#endif