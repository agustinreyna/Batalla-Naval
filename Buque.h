#ifndef BUQUE_H
#define BUQUE_H
#include <iostream>
#include "Barco.h"
#include "Posicion.h"
using namespace std;

class Buque:public Barco{
    private:
        Posicion posicion[3];//EL BUQUE AL SER EL BARCO MAS GRANDE OCUPA 3 POSICIONES LAS CUALES PUEDEN SER HORIZONTAL O VERTICAL
        int vidas;
    public:
        Buque();
        ~Buque();
        int getVidas();
        void setPosicionH(bool[10][10]);//SETEA HORIZONTALMENTE UN BUQUE Y PASA DE PARAMETRO LA MATRIZ DE BOOLEANOS PARA CHEQUEAR SI LAS 3 POSICIONES ESTAN OCUPADAS O NO
        void setPosicionV(bool[10][10]);//SETEA VERTICALMENTE UN BUQUE Y PASA DE PARAMETRO LA MATRIZ DE BOOLEANOS PARA CHEQUEAR SI LAS 3 POSICIONES ESTAN OCUPADAS O NO
        void Atacado();//SE LE RESTA UNA VIDA AL BUQUE
        void mostrar();//SE MUESTRA LAS 3 POSICIONES DEL BUQUE
        int getF(int);//DEVUELVE UNA DE LAS FILAS DEL BUQUE MEDIANTE UN PARAMETRO
        int getC(int);//DEVUELVE UNA DE LAS COLUMNAS DEL BUQUE MEDIANTE UN PARAMETRO
        void setDisparado(int);//SETEA EL ATRIBUTO "Disparado" DE LA CLASE POSICION A TRUE.USA UN PARAMETRO PARA SELECCIONAR UNA DE LAS 3 POSICIONES
        bool getDisparado(int);//GET DE "Disparado".USA UN PARAMETRO PARA SELECCIONAR UNA DE LAS 3 POSICIONES
};

#endif