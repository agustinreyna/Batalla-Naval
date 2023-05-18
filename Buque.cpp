#include <iostream>
#include "Buque.h"
using namespace std;

    Buque::Buque(){
        vidas=3;
    }

    Buque::~Buque(){
    }

    int Buque::getVidas(){
        return vidas;
    }

    void Buque::Atacado(){
        vidas--;
    }