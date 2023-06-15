#ifndef BARCO_H
#define BARCO_H
#include <iostream>
#include "Posicion.h"
using namespace std;

class Barco{//SUPERCLASE BARCO
    private:
    Posicion posicion[3];
    int vidas;
    public:
        Barco();
        ~Barco();
        int getVidas();
        void setVidas(int);
        void setPosicionBote(bool[10][10]);//FUNCION PARA SELECCIONAR LA CASILLA DEL BOTE,TOMA DE PARAMETRO UNA MATRIZ PERTENECIENTE A LA CLASE JUGADOR PARA CORROBORAR QUE LA CASILLA NO ESTE OCUPADA
        void setPosicionHF(bool[10][10]);//SETEA LA POSICION HORIZONTAL DE LA FRAGATA
        void setPosicionVF(bool[10][10]);//SETEA LA POSICION VERTICAL DE LA FRAGATA
        void setPosicionHBuque(bool[10][10]);//SETEA HORIZONTALMENTE UN BUQUE Y PASA DE PARAMETRO LA MATRIZ DE BOOLEANOS PARA CHEQUEAR SI LAS 3 POSICIONES ESTAN OCUPADAS O NO
        void setPosicionVBuque(bool[10][10]);//SETEA VERTICALMENTE UN BUQUE Y PASA DE PARAMETRO LA MATRIZ DE BOOLEANOS PARA CHEQUEAR SI LAS 3 POSICIONES ESTAN OCUPADAS O NO
        void atacado();
        void mostrarBote();
        void mostrarFragata();
        void mostrarBuque();
        int getF(int);
        int getC(int);
        void setDisparado(int);
        bool getDisparado(int);
        Posicion getPosicion(int);
        
};

#endif