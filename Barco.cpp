#include <iostream>
#include "Barco.h"

    Barco::Barco(){
    }

    Barco::~Barco(){
    }

    int Barco::getVidas(){
        return vidas;
    }

    void Barco::setPosicionBote(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta el bote"<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || i>9 || i<0 || j>9 || j<0);//LA PRIMER CONDICION CHEQUEA QUE LA POSICION (i,j) DE LA MATRIZ DE BOOLEANOS NO SEA VERDADERA,YA QUE EN ESE CASO LA CASILLA ESTARIA OCUPADA
        posicion[0].setPosicion(i,j);
        cout<<endl; 
    }

    void Barco::setPosicionHF(bool p[10][10]){
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

    void Barco::setPosicionVF(bool p[10][10]){
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

    void Barco::setPosicionHBuque(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta el buque: "<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || p[i][j+1] || p[i][j+2] || i>9 || i<0 || j>9 || j<0 || j+1>9 || j+1<0 || j+2>9 || j+2<0);//LAS TRES PRIMERAS CONDICIONES CHEQUEAN QUE LAS CASILLAS PROPUESTAS PARA EL BUQUE NO ESTEN OCUPADAS
        posicion[0].setPosicion(i,j);//SE SETEA LA PRIMER POSICION CON LOS DATOS DADOS POR EL USUARIO
        j++;//SE LE SUMA UNO A LA COLUMNA YA QUE EL BUQUE TIENE QUE ESTAR HORIZONTAL
        posicion[1].setPosicion(i,j);//SE SETEA LA SEGUNDA POSICION CON LA FILA DADA POR EL USUARIO Y LA COLUMNA DADA + 1
        j++;//SE LE SUMA UNO A LA COLUMNA YA QUE EL BUQUE TIENE QUE ESTAR HORIZONTAL
        posicion[2].setPosicion(i,j);//SE SETEA LA SEGUNDA POSICION CON LA FILA DADA POR EL USUARIO Y LA COLUMNA DADA + 2
        cout<<endl;
    }

    void Barco::setPosicionVBuque(bool p[10][10]){
        int i,j;
        cout<<"Decime la fila y columna donde esta el buque: "<<endl;
        do{
        cin>>i;
        cin>>j;
        }while(p[i][j] || p[i+1][j] || p[i+2][j] || i>9 || i<0 || i+1>9 || i+1<0 || i+2>9 || 1+2<0 || j>9 || j<0);//LAS TRES PRIMERAS CONDICIONES CHEQUEAN QUE LAS CASILLAS PROPUESTAS PARA EL BUQUE NO ESTEN OCUPADAS
        posicion[0].setPosicion(i,j);//SE SETEA LA PRIMER POSICION CON LOS DATOS DADOS POR EL USUARIO
        i++;//SE LE SUMA UNO A LA FILA YA QUE EL BUQUE TIENE QUE ESTAR VERTICAL
        posicion[1].setPosicion(i,j);//SE SETEA LA SEGUNDA POSICION CON LA COLUMNA DADA POR EL USUARIO Y LA FILA DADA + 1
        i++;//SE LE SUMA UNO A LA FILA YA QUE EL BUQUE TIENE QUE ESTAR VERTICAL
        posicion[2].setPosicion(i,j);//SE SETEA LA SEGUNDA POSICION CON LA COLUMNA DADA POR EL USUARIO Y LA FILA DADA + 2
        cout<<endl;
    }

    void Barco::atacado(){
        vidas--;
    }

    void Barco::mostrarBote(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
        cout<<"Y TIENE "<<vidas<<" VIDAS"<<endl;
    }

    void Barco::mostrarFragata(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
        cout<<"FILA "<<posicion[1].getFila()<<","<<"COLUMNA "<<posicion[1].getColumna()<<endl;
        cout<<"Y TIENE "<<vidas<<" VIDAS"<<endl;
    }

    void Barco::mostrarBuque(){
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
        cout<<"FILA "<<posicion[1].getFila()<<","<<"COLUMNA "<<posicion[1].getColumna()<<endl;
        cout<<"FILA "<<posicion[2].getFila()<<","<<"COLUMNA "<<posicion[2].getColumna()<<endl;
        cout<<"Y TIENE "<<vidas<<" VIDAS"<<endl;
    }

    int Barco::getF(int k){
        return posicion[k].getFila();
    }

    int Barco::getC(int k){
        return posicion[k].getColumna();
    }

    void Barco::setDisparado(int k){
        posicion[k].Disparado();
    }

    bool Barco::getDisparado(int k){
        return posicion[k].getDisparado();
    }