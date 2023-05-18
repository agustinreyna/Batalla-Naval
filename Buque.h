#include <iostream>
#include "Barco.h"
using namespace std;

class Buque:public Barco{
    private:
        int vidas;
        const int tamanio=3;
    public:
        Buque();
        ~Buque();
        int getVidas();
        void Atacado();
};