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

    void Fragata::setPosicionH(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote: "<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || p[i][j+1]);
        posicion[0].setPosicion(i,j);
        j++;
        posicion[1].setPosicion(i,j);
        cout<<endl;
    }

    void Fragata::setPosicionV(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote: "<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || p[i+1][j]);
        posicion[0].setPosicion(i,j);
        i++;
        posicion[1].setPosicion(i,j);
        cout<<endl;
    }

    void Fragata::Atacado(){
        vidas--;
    }

    void Fragata::mostrar(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
        cout<<"FILA "<<posicion[1].getFila()<<","<<"COLUMNA "<<posicion[1].getColumna()<<endl;
    }

    int Fragata::getF(int k){
        return posicion[k].getFila();
    }

    int Fragata::getC(int k){
        return posicion[k].getColumna();
    }

    void Fragata::setDisparado(int k){
        posicion[k].Disparado();
    }

    bool Fragata::getDisparado(int k){
        return posicion[k].getDisparado();
    }
