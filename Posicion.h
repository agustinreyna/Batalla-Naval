#ifndef POSICION_H
#define POSICION_H
#include <iostream>
using namespace std;

class Posicion{
    private:
        bool disparado=false;
        int i,j;//FILA Y COLUMNA 
    public:
        Posicion();
        void setPosicion(int,int);//SE SETEA EL I,J A PARTIR DE PARAMETROS DADOS POR EL USUARIO
        int getFila();//DEVUELVE LA FILA
        int getColumna();//DEVUELVE LA COLUMNA
        void Disparado();//SETEA EL VALOR DE DISPARADO A TRUE
        bool getDisparado();//DEVUELVE EL VALOR DE DISPARADO
};
#endif