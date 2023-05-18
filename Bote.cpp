#include <iostream>
#include "Bote.h"
using namespace std;

    Bote::Bote(){
        vidas=1;
    }

    Bote::~Bote(){
    }

    int Bote::getVidas(){
        return vidas;
    }

    void Bote::Atacado(){
        vidas--;
    }
