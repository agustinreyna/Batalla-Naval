/*#include <iostream>
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
        cout<<"Decime la fila y columna donde esta la fragata: "<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || p[i][j+1] || i>9 || i<0 || j>9 || j<0 || j+1>9 || j+1<0);//LAS DOS PRIMERAS CONDICIONES CHEQUEAN QUE LAS CASILLAS PROPUESTAS PARA LA FRAGATA NO ESTEN OCUPADAS
        posicion[0].setPosicion(i,j);//SE SETEA LA PRIMERA POSICION DE LA FRAGATA CON LOS DATOS DADOS POR EL USUARIO
        j++;//AL HABER ELEGIDO PREVIAMENTE QUE LA FRAGATA ERA HORIZONTAL SE LE SUMA UNO A LA POSICION DE LA COLUMNA PARA QUE SEA HORIZONTAL
        posicion[1].setPosicion(i,j);//SE SETEA LA SEGUNDA POSICION DE LA FRAGATA CON LA FILA DADA POR EL USUARIO Y LA COLUMNA DADA POR EL USUARIO+1
        cout<<endl;
    }

    void Fragata::setPosicionV(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta la fragata: "<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || p[i+1][j] || i>9 || i<0 || i+1>9 || i+1<0 || j>9 || j<0);//LAS DOS PRIMERAS CONDICIONES CHEQUEAN QUE LAS CASILLAS PROPUESTAS PARA LA FRAGATA NO ESTEN OCUPADAS
        posicion[0].setPosicion(i,j);//SE SETEA LA PRIMERA POSICION DE LA FRAGATA CON LOS DATOS DADOS POR EL USUARIO
        i++;//AL HABER ELEGIDO PREVIAMENTE QUE LA FRAGATA ERA VERTICAL SE LE SUMA UNO A LA POSICION DE LA FILA PARA QUE SEA VERTICAL
        posicion[1].setPosicion(i,j);//SE SETEA LA SEGUNDA POSICION DE LA FRAGATA CON LA COLUMNA DADA POR EL USUARIO Y LA FILA DADA POR EL USUARIO+1
        cout<<endl;
    }

    void Fragata::Atacado(){
        vidas--;//SE LE RESTA UNA VIDA A LA FRAGATA
    }

    void Fragata::mostrar(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;//MUESTRA FILA Y COLUMNA DE LA POSICION 0
        cout<<"FILA "<<posicion[1].getFila()<<","<<"COLUMNA "<<posicion[1].getColumna()<<endl;//MUESTRA FILA Y COLUMNA DE LA POSICION 1
    }

    int Fragata::getF(int k){//FUNCION QUE DEVUELVE LA FILA DE UNA DE LAS POSICIONES DE LA FRAGATA.AL TENER MAS DE UNA POSICION TOMA UN PARAMETRO k PARA SELECCIONAR LA POSICION
        return posicion[k].getFila();
    }

    int Fragata::getC(int k){//FUNCION QUE DEVUELVE LA COLUMNA DE UNA DE LAS POSICIONES DE LA FRAGATA.AL TENER MAS DE UNAS POSICION TOMA UN PARAMETRO k PARA SELECCIONAR LA POSICION
        return posicion[k].getColumna();
    }

    void Fragata::setDisparado(int k){//FUNCION QUE SETEA EL VALOR "Disparado" DE UNA CASILLA A TRUE.TOMA EL PARAMETRO k PARA REFERIRSE A UNA DETERMINADA POSICION
        posicion[k].Disparado();
    }

    bool Fragata::getDisparado(int k){//DEVUELVE EL VALOR "Disparado" DE UNA CASILLA
        return posicion[k].getDisparado();
    }
*/