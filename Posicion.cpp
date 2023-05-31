#include <iostream>
#include "Posicion.h"
using namespace std;

    Posicion::Posicion(){
    }

    void Posicion::setPosicion(int _i,int _j){//PARAMETROS DADOS POR EL USUARIO
        i=_i;
        j=_j;
    }

    int Posicion::getFila(){//DEVUELVE LA FILA
        return i;
    }

    int Posicion::getColumna(){//DEVUELVE LA COLUMNA
        return j;
    }

    void Posicion::Disparado(){
        disparado=true;
    }

    bool Posicion::getDisparado(){
        return disparado;
    }
