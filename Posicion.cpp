#include <iostream>
#include "Posicion.h"
using namespace std;

    Posicion::Posicion(){
    }

    void Posicion::setPosicion(int _i,int _j){
        i=_i;
        j=_j;
    }

    int Posicion::getFila(){
        return i;
    }

    int Posicion::getColumna(){
        return j;
    }

    void Posicion::Disparado(){
        disparado=true;
    }

    bool Posicion::getDisparado(){
        return disparado;
    }
