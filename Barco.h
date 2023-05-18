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