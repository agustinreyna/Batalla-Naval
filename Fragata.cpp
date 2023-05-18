#include <iostream>
#include "Fragata.h"
using namespace std;

    Fragata::Fragata(){
        vidas=2;
    }

    Fragata::~Fragata(){
    }

    int Fragata::getVidas(){
        return vidas;
    }

    void Fragata::Atacado(){
        vidas--;
    }