#include <iostream>
#include "Barco.h"

    Barco::Barco(){
        estado=true;
    }

    Barco::~Barco(){
    }

    void Barco::setEstado(bool _estado){
        estado=_estado;
    }

    bool Barco::getEstado(){
        return estado;
    }

