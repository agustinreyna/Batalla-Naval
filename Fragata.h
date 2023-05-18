#include <iostream>
#include "Barco.h"
using namespace std;

class Fragata:public Barco{
    private:
        int vidas;
        const int tamanio=2;
    public:
        Fragata();
        ~Fragata();
        int getVidas();
        void Atacado();
};