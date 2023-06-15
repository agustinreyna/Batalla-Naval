#include <iostream>
#include <windows.h>//LIBRERIA PARA MODIFICAR LA CONSOLA
#define color SetConsoleTextAttribute//DEFINE LA PALABRA "color" COMO TODO ESE COMANDO
#include "Jugador.h"
using namespace std;

    Jugador::Jugador(){
        int i,j;
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                M[i][j]='-';//EL TABLERO SE INICIALIZA CON TODOS GUIONES
            }
        }
    }

    bool Jugador::perdio(){
        int i;
        bool perdio=true;

        for(i=0;i<8;i++){
            if(barcos[i].getVidas()!=0)perdio=false;
        }
        return perdio;
    }

    void Jugador::setNombre(){
        string _nombre;
        cout<<"Decime cual es tu nombre"<<endl;
        cin>>_nombre;
        nombre=_nombre;
    }

    void Jugador::setNombreCPU(){
        nombre="CPU";
    }

    string Jugador::getNombre(){
        return nombre;
    }

    void Jugador::setBarcos(){
        int i,k;
        for(i=0;i<3;i++){
            barcos[i].setPosicionBote(P);
            barcos[i].setVidas(1);
            P[barcos[i].getF(0)][barcos[i].getC(0)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
            M[barcos[i].getF(0)][barcos[i].getC(0)]='O';//SE COLOCA UN "O" EN EL TABLERO REPRESENTANDO UN BOTE
        }

        for(i=3;i<6;i++){
            do{
            cout<<"Decime si la fragata va a estar horizontal(0) o vertical(1)"<<endl;
            cin>>k;
            }while(k!=0 && k!=1);//ESTA CONDICION SIRVE PARA QUE EL USUARIO SOLO PUEDA INGRESAR 1 O 0
            if(k==0){//SI ELIGIO 0 ENTONCES HORIZONTAL
                barcos[i].setPosicionHF(P);
                barcos[i].setVidas(2);
                P[barcos[i].getF(0)][barcos[i].getC(0)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[barcos[i].getF(1)][barcos[i].getC(1)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[barcos[i].getF(0)][barcos[i].getC(0)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
                M[barcos[i].getF(1)][barcos[i].getC(1)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
            }
            else {//SI ELIGIO 1 ENTONCES VERTICAL
                barcos[i].setPosicionVF(P);
                barcos[i].setVidas(2);
                P[barcos[i].getF(0)][barcos[i].getC(0)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[barcos[i].getF(1)][barcos[i].getC(1)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[barcos[i].getF(0)][barcos[i].getC(0)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
                M[barcos[i].getF(1)][barcos[i].getC(1)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
            }
        }

        for(i=6;i<8;i++){
            do{
            cout<<"Decime si el buque va a estar horizontal(0) o vertical(1)"<<endl;
            cin>>k;
            }while(k!=0 && k!=1);
            if(k==0){//SI ELIGIO 0 ENTONCES HORIZONTAL
                barcos[i].setPosicionHBuque(P);
                barcos[i].setVidas(3);
                P[barcos[i].getF(0)][barcos[i].getC(0)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[barcos[i].getF(1)][barcos[i].getC(1)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[barcos[i].getF(2)][barcos[i].getC(2)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[barcos[i].getF(0)][barcos[i].getC(0)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[barcos[i].getF(1)][barcos[i].getC(1)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[barcos[i].getF(2)][barcos[i].getC(2)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
            }
            else {//SI ELIGIO 1 ENTONCES VERTICAL
                barcos[i].setPosicionVBuque(P);
                barcos[i].setVidas(3);
                P[barcos[i].getF(0)][barcos[i].getC(0)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[barcos[i].getF(1)][barcos[i].getC(1)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[barcos[i].getF(2)][barcos[i].getC(2)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[barcos[i].getF(0)][barcos[i].getC(0)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[barcos[i].getF(1)][barcos[i].getC(1)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[barcos[i].getF(2)][barcos[i].getC(2)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
            }
        }
    }
    
    Barco Jugador::getbarco(int k){
        return barcos[k];
    }

    void Jugador::mostrarBarcos(){
        int i;
        for(i=0;i<3;i++){
            barcos[i].mostrarBote();
        }
        for(i=3;i<6;i++){
            barcos[i].mostrarFragata();
        }
        for(i=6;i<8;i++){
            barcos[i].mostrarBuque();
        }
    }

    void Jugador::atacado(int f1,int c1){//TOMA DE PARAMETROS UNA FILA Y COLUMNA INGRESADOS POR EL JUGADOR
        int k,i,Fila,Columna;

        for(i=0;i<3;i++){//ESTE FOR ES PARA REFERIRSE A LOS BOTES
            if(barcos[i].getF(0)==f1 && barcos[i].getC(0)==c1 && !barcos[i].getDisparado(0)){//SI LA FILA Y COLUMNA DADAS COINCIDEN CON LAS DEL BOTE Y EL BOTE NO FUE DISPARADO PREVIAMENTE ENTONCES:
                barcos[i].atacado();
                barcos[i].setDisparado(0);
                M[f1][c1]='X';//EN EL TABLERO SE COLOCA UNA "X" PARA REPRESENTAR QUE ESA POSICION FUE ATACADA
                cout<<"Un bote fue disparado!!!"<<endl;
                return;//TERMINA LA FUNCION
            }
        }

        for(i=3;i<6;i++){//ESTE FOR ES PARA REFERIRSE A LAS FRAGATAS
            for(k=0;k<2;k++){//ESTE FOR SE USA PARA REFERIRSE A UNA DE LAS DOS POSICIONES QUE TIENE LA FRAGATA
            Fila=barcos[i].getF(k);//SE DEFINE LA VARIABLE FILA COMO UNA DE LAS DOS FILAS DE LA FRAGATA
            Columna=barcos[i].getC(k);//SE DEFINE LA VARIABLE COLUMNA COMOM UNA DE LAS DOS COLUMNAS DE LA FRAGATA
            if(Fila==f1 && Columna==c1 && !barcos[i].getDisparado(k)){//SI UNA DE LAS POSICIONES DE LA FRAGATA COINCIDE CON LA FILA Y COLUMNA QUE DIO EL USUARIO Y ESA CASILLA NO FUE ATACADA PREVIAMENTE ENTONCES:
                barcos[i].atacado();
                barcos[i].setDisparado(k);
                M[f1][c1]='X';//EN EL TABLERO SE COLOCA UNA "X" PARA REPRESENTAR QUE ESA POSICION FUE ATACADA
                cout<<"Una fragata fue disparada!!!"<<endl;
                return;//TERMINA LA FUNCION
            }
        }
        }
        for(i=6;i<8;i++){//ESTE FOR ES PARA REFERIRSE A LOS BUQUES
            for(k=0;k<3;k++){//ESTE FOR SE USA PARA REFERIRSE A UNA DE LAS TRES POSICIONES QUE TIENE EL BUQUE
                Fila=barcos[i].getF(k);//SE DEFINE LA VARIABLE FILA COMO UNA DE LAS TRES FILAS DEL BUQUE
                Columna=barcos[i].getC(k);//SE DEFINE LA VARIABLE COLUMNA COMO UNA DE LAS TRES COLUMNAS
                if(Fila==f1 && Columna==c1 && !barcos[i].getDisparado(k)){//SI UNA DE LAS POSICIONES DEL BUQUE COINCIDE CON LA FILA Y COLUMNA QUE DIO EL USUARIO Y ESA CASILLA NO FUE ATACADA PREVIAMENTE ENTONCES:
                    barcos[i].atacado();
                    barcos[i].setDisparado(k);
                    M[f1][c1]='X';//EN EL TABLERO SE COLOCA UNA "X" PARA REPRESENTAR QUE ESA POSICION FUE ATACADA
                    cout<<"Un buque fue disparado!!!"<<endl;
                    return;//TERMINA LA FUNCION
                }
            }
        }
        cout<<"Agua!!!"<<endl;//EN EL CASO QUE NO LE PEGO A NADA 
    }

    void Jugador::mostrarM(){
        int i,j;
        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );//ESTA FUNCION ES PARA PODER REFERIRSE A LA CONSOLA COMO OBJETO
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                cout<<"|";
                if(M[i][j]=='B')color(hConsole,1);//SI ES UN BUQUE ENTONCES EL COLOR DE LA CONSOLA ES AZUL
                else if(M[i][j]=='F')color(hConsole,2);//SI ES UNA FRAGATA ENTONCES EL COLOR DE LA CONSOLA ES VERDE
                else if(M[i][j]=='O')color(hConsole,4);//SI ES UN BOTE ENTONCES EL COLOR DE LA CONSOLA ES ROJA
                else color(hConsole,0);//SI NO ES NADA DE LO ANTERIOR ENTONCES EL COLOR DE LA CONSOLA ES NEGRO
                cout<<M[i][j];
                cout<<"|";
            }
            cout<<endl;
        }
        color(hConsole,7);//ES PARA QUE LA CONSOLA VUELVA A SU COLOR NORMAL
    }
        
    void Jugador::setM(int i,int j,char x){
        M[i][j]=x;
    }

    void Jugador::setP(int i,int j){
        P[i][j]=true;
    }

    bool Jugador::getP(int i,int j){
        return P[i][j];
    }