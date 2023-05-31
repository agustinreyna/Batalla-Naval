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

    void Bote::setPosicion(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote"<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || i>9 || i<0 || j>9 || j<0);//LA PRIMER CONDICION CHEQUEA QUE LA POSICION (i,j) DE LA MATRIZ DE BOOLEANOS NO SEA VERDADERA,YA QUE EN ESE CASO LA CASILLA ESTARIA OCUPADA
        posicion[0].setPosicion(i,j);
        cout<<endl; 
    }

    void Bote::Atacado(){
        vidas--;//SI EL BOTE ES ATACADO SE LE RESTA UNA VIDA
    }

    void Bote::mostrar(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;//MUESTRA LA UNICA POSICION DEL BOTE
    }

    int Bote::getF(){
        return posicion[0].getFila();
    }

    int Bote::getC(){
        return posicion[0].getColumna();
    }

    void Bote::setDisparado(){
        posicion[0].Disparado();//SETEA EL VALOR DEL ATRIBUTO DISPARADO DE LA CLASE POSICION A TRUE
    }

    bool Bote::getDisparado(){
        return posicion[0].getDisparado();
    }

