#include <iostream>
#include "Barco.h"

    Barco::Barco(){
        estado=true;
    }

    Barco::~Barco(){
        cout<<"Se destruyo un barco ..."<<endl;
    }

    void Barco::setEstado(bool _estado){
        estado=_estado;
    }

    bool Barco::getEstado(){
        return estado;
    }

