#ifndef BARCO_H
#define BARCO_H
#include <iostream>
using namespace std;

class Barco{
    private:
        bool estado;
    public:
        Barco();
        ~Barco();
        void setEstado(bool);
        bool getEstado();
};

#endif