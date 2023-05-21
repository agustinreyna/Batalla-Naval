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

    void Buque::setPosicionH(){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote: "<<endl;
        cin>>i;
        cin>>j;
        posicion[0].setPosicion(i,j);
        j++;
        posicion[1].setPosicion(i,j);
        j++;
        posicion[2].setPosicion(i,j);
        cout<<endl;
    }

    void Buque::setPosicionV(){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote: "<<endl;
        cin>>i;
        cin>>j;
        posicion[0].setPosicion(i,j);
        i++;
        posicion[1].setPosicion(i,j);
        i++;
        posicion[2].setPosicion(i,j);
        cout<<endl;
    }

    void Buque::Atacado(){
        vidas--;
    }

    void Buque::mostrar(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
        cout<<"FILA "<<posicion[1].getFila()<<","<<"COLUMNA "<<posicion[1].getColumna()<<endl;
        cout<<"FILA "<<posicion[2].getFila()<<","<<"COLUMNA "<<posicion[2].getColumna()<<endl;
    }

    int Buque::getF(int k){
        return posicion[k].getFila();
    }

    int Buque::getC(int k){
        return posicion[k].getColumna();
    }

    void Buque::setDisparado(int k){
        posicion[k].Disparado();
    }

    bool Buque::getDisparado(int k){
        return posicion[k].getDisparado();
    }