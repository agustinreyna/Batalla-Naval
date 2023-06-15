#include <iostream>
#include "JugadorPersona.h"
using namespace std;

    JugadorPersona::JugadorPersona(){
    }

    void JugadorPersona::mostrarM(){
        persona.mostrarM();
    }

    void JugadorPersona::setBarcos(){
        persona.setBarcos();
    }

    void JugadorPersona::setNombre(){
        persona.setNombre();
    }

    void JugadorPersona::atacado(int f1,int c1){
        persona.atacado(f1,c1);
    }

    bool JugadorPersona::perdio(){
        return persona.perdio();
    }

    string JugadorPersona::getNombre(){
        return persona.getNombre();
    }