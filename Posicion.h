#ifndef POSICION_H
#define POSICION_H
#include <iostream>
using namespace std;

class Posicion{
    private:
        bool disparado=false;
        bool ocupado=false;
        int i,j;
    public:
        Posicion();
        void setPosicion(int,int);
        int getFila();
        int getColumna();
        void Disparado();
        bool getDisparado();
        void Ocupado();
        bool getOcupado();
};
#endif