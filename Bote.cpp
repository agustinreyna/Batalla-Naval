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

    void Bote::setPosicion(){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote: "<<endl;
        cin>>i;
        cin>>j;
        posicion[0].setPosicion(i,j);
        cout<<endl;
    }

    void Bote::Atacado(){
        vidas--;
    }

    void Bote::mostrar(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
    }

    int Bote::getF(){
        return posicion[0].getFila();
    }

    int Bote::getC(){
        return posicion[0].getColumna();
    }

    void Bote::setDisparado(){
        posicion[0].Disparado();
    }

    bool Bote::getDisparado(){
        return posicion[0].getDisparado();
    }
