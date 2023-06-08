/*#include <iostream>
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

    void Buque::setPosicionH(bool p[10][10]){
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

    void Buque::setPosicionV(bool p[10][10]){
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

    void Buque::Atacado(){
        vidas--;//SE LE RESTAN UNA VIDA AL BUQUE
    }

    void Buque::mostrar(){//MUESTRA LAS 3 POSICIONES DEL BUQUE
        cout<<"FILA "<<posicion[0].getFila()<<","<<"COLUMNA "<<posicion[0].getColumna()<<endl;
        cout<<"FILA "<<posicion[1].getFila()<<","<<"COLUMNA "<<posicion[1].getColumna()<<endl;
        cout<<"FILA "<<posicion[2].getFila()<<","<<"COLUMNA "<<posicion[2].getColumna()<<endl;
    }

    int Buque::getF(int k){//MEDIANTE UN PARAMETRO DEVUELVE LA FILA DE UNA DE LAS TRES COLUMANAS DEL BUQUE
        return posicion[k].getFila();
    }

    int Buque::getC(int k){//MEDIANTE UN PARAMETRO DEVUELVE LA COLUMNA DE UNA DE LAS TRES COLUMANAS DEL BUQUE
        return posicion[k].getColumna();
    }

    void Buque::setDisparado(int k){//MEDIANTE UN PARAMETRO SETEA EL ATRIBUTO "Disparado" DE LA CLASE POSICION A TRUE
        posicion[k].Disparado();
    }

    bool Buque::getDisparado(int k){//MEDIANTE UN PARAMETRO DEVUELVE EL ATRIBUTO "Disparado"
        return posicion[k].getDisparado();
    }
*/