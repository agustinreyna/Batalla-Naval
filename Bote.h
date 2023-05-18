#include <iostream>
#include "Barco.h"
using namespace std;

class Bote:public Barco{
    private:
        int vidas;
        const int tamanio=1;
    public:
        Bote();
        ~Bote();
        int getVidas();
        void Atacado();
};