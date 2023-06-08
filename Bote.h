/*#ifndef BOTE_H
#define BOTE_H
#include <iostream>
#include "Barco.h"
#include "Posicion.h"
using namespace std;

class Bote:public Barco{//SUBCLASE BOTE
    private:
        Posicion posicion[1];//TIENE UNA SOLA POSICION DEBIDO A QUE ES EL BARCO MAS CHICO
        int vidas;//CANTIDAD DE VIDAS DEL BOTE,LAS CUALES SON IGUALES A SU TAMAÑO
    public:
        Bote();
        ~Bote();
        int getVidas();
        void setPosicionBote(bool[10][10]);//FUNCION PARA SELECCIONAR LA CASILLA DEL BOTE,TOMA DE PARAMETRO UNA MATRIZ PERTENECIENTE A LA CLASE JUGADOR PARA CORROBORAR QUE LA CASILLA NO ESTE OCUPADA
        void Atacado();
        void mostrarBote();
        int getF();//DEVUELVE LA UNICA FILA DEL BOTE YA QUE SOLO TIENE UNA POSICION
        int getC();//DEVUELVE LA UNICA COLUMNA DEL BOTE YA QUE SOLO TIENE UNA POSICION
        void setDisparado();//SETEA EL VALOR DEL ATRIBUTO "Disparado" DE LA CLASE POSICION A TRUE
        bool getDisparado();//DEVUELVE EL VALOR DEL ATRIBUTO "Disparado"
};
#endif*/