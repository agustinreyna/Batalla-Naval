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

        for(i=0;i<2;i++){//ESTE FOR VA DE 0 A 1 YA QUE SOLO HAY DOS BUQUES
            if(buque[i].getVidas()!=0)perdio=false;//SI ALGUNO DE LOS BUQUES TIENE MAS DE 0 VIDAS ENTONCES EL JUGADOR NO PERDIO 
        }

        for(i=0;i<3;i++){//ESTE FOR VA DE 0 A 2 YA QUE HAY TRES FRAGATAS Y BUQUES
            if(fragata[i].getVidas()!=0)perdio=false;//SI ALGUNO DE LAS FRAGATAS TIENE MAS DE 0 VIDAS ENTONCES EL JUGADOR NO PERDIO 
            if(bote[i].getVidas()!=0)perdio=false;//SI ALGUNO DE LOS BOTES TIENE MAS DE 0 VIDAS ENTONCES EL JUGADOR NO PERDIO 
        }

        return perdio;
    }

    void Jugador::setNombre(){
        string _nombre;
        cout<<"Decime cual es tu nombre"<<endl;
        cin>>_nombre;
        nombre=_nombre;
    }

    string Jugador::getNombre(){
        return nombre;
    }

    void Jugador::setBotes(){
        int i;
        for(i=0;i<3;i++){//FOR DE 3 PORQUE SON 3 BOTES
            bote[i].setPosicion(P);//P ES LA MATRIZ DE BOOLS
            P[bote[i].getF()][bote[i].getC()]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
            M[bote[i].getF()][bote[i].getC()]='O';//SE COLOCA UN "O" EN EL TABLERO REPRESENTANDO UN BOTE
        }
    }

    void Jugador::setFragatas(){
        int i,k;
        for(i=0;i<3;i++){//FOR DE 3 PORQUE SON 3 FRAGATAS
            do{
            cout<<"Decime si la fragata va a estar horizontal(0) o vertical(1)"<<endl;
            cin>>k;
            }while(k!=0 && k!=1);//ESTA CONDICION SIRVE PARA QUE EL USUARIO SOLO PUEDA INGRESAR 1 O 0
            if(k==0){//SI ELIGIO 0 ENTONCES HORIZONTAL
                fragata[i].setPosicionH(P);
                P[fragata[i].getF(0)][fragata[i].getC(0)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[fragata[i].getF(1)][fragata[i].getC(1)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[fragata[i].getF(0)][fragata[i].getC(0)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
                M[fragata[i].getF(1)][fragata[i].getC(1)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
            }
            else {//SI ELIGIO 1 ENTONCES VERTICAL
                fragata[i].setPosicionV(P);
                P[fragata[i].getF(0)][fragata[i].getC(0)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[fragata[i].getF(1)][fragata[i].getC(1)]=true;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[fragata[i].getF(0)][fragata[i].getC(0)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
                M[fragata[i].getF(1)][fragata[i].getC(1)]='F';//SE COLOCA UN "F" EN EL TABLERO REPRESENTANDO UNA FRAGATA
            }
        }
    }

    void Jugador::setBuques(){
        int i,k;
        for(i=0;i<2;i++){//FOR DE 2 PORQUE HAY 2 BUQUES
            do{
            cout<<"Decime si el buque va a estar horizontal(0) o vertical(1)"<<endl;
            cin>>k;
            }while(k!=0 && k!=1);
            if(k==0){//SI ELIGIO 0 ENTONCES HORIZONTAL
                buque[i].setPosicionH(P);
                P[buque[i].getF(0)][buque[i].getC(0)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[buque[i].getF(1)][buque[i].getC(1)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[buque[i].getF(2)][buque[i].getC(2)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[buque[i].getF(0)][buque[i].getC(0)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[buque[i].getF(1)][buque[i].getC(1)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[buque[i].getF(2)][buque[i].getC(2)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
            }
            else {//SI ELIGIO 1 ENTONCES VERTICAL
                buque[i].setPosicionV(P);
                P[buque[i].getF(0)][buque[i].getC(0)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[buque[i].getF(1)][buque[i].getC(1)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                P[buque[i].getF(2)][buque[i].getC(2)]=true;;//SE MODIFICA LA MATRIZ DE BOOLS PARA QUE ESTE ACTUALIZADA
                M[buque[i].getF(0)][buque[i].getC(0)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[buque[i].getF(1)][buque[i].getC(1)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
                M[buque[i].getF(2)][buque[i].getC(2)]='B';//SE COLOCA UN "B" EN EL TABLERO REPRESENTANDO UN BUQUE
            }
        }
    }

    void Jugador::mostrarBotes(){
        int i;
        for(i=0;i<3;i++){//FOR DE 3 PORQUE SON 3 BOTES
            bote[i].mostrar();//SE MUESTRA LA POSICION
            cout<<"Y tiene "<<bote[i].getVidas()<<" vidas"<<endl;//SE MUESTRAN LAS VIDAS
        }
    }

    void Jugador::mostrarFragatas(){
        int i;
        for(i=0;i<3;i++){//FOR DE 3 PORQUE SON 3 FRAGATAS
            fragata[i].mostrar();//SE MUESTRAN LAS POSICIONES
            cout<<"Y tiene "<<fragata[i].getVidas()<<" vidas"<<endl;//SE MUESTRAN LAS VIDAS
        }
    }

    void Jugador::mostrarBuques(){
        int i;
        for(i=0;i<2;i++){//FOR DE 2 PORQUE SON 2 BUQUES
            buque[i].mostrar();//SE MUESTRAN LAS POSICIONES
            cout<<"Y tiene "<<buque[i].getVidas()<<" vidas"<<endl;//SE MUESTRAN LAS VIDAS
        }
    }

    void Jugador::atacado(int f1,int c1){//TOMA DE PARAMETROS UNA FILA Y COLUMNA INGRESADOS POR EL JUGADOR
        int k,i,Fila,Columna;

        for(k=0;k<3;k++){//ESTE FOR ES PARA REFERIRSE A LOS BOTES
            if(bote[k].getF()==f1 && bote[k].getC()==c1 && !bote[k].getDisparado()){//SI LA FILA Y COLUMNA DADAS COINCIDEN CON LAS DEL BOTE Y EL BOTE NO FUE DISPARADO PREVIAMENTE ENTONCES:
                bote[k].Atacado();
                bote[k].setDisparado();
                M[f1][c1]='X';//EN EL TABLERO SE COLOCA UNA "X" PARA REPRESENTAR QUE ESA POSICION FUE ATACADA
                cout<<"Un bote fue disparado!!!"<<endl;
                return;//TERMINA LA FUNCION
            }
        }

        for(i=0;i<3;i++){//ESTE FOR ES PARA REFERIRSE A LAS FRAGATAS
            for(k=0;k<2;k++){//ESTE FOR SE USA PARA REFERIRSE A UNA DE LAS DOS POSICIONES QUE TIENE LA FRAGATA
            Fila=fragata[i].getF(k);//SE DEFINE LA VARIABLE FILA COMO UNA DE LAS DOS FILAS DE LA FRAGATA
            Columna=fragata[i].getC(k);//SE DEFINE LA VARIABLE COLUMNA COMOM UNA DE LAS DOS COLUMNAS DE LA FRAGATA
            if(Fila==f1 && Columna==c1 && !fragata[i].getDisparado(k)){//SI UNA DE LAS POSICIONES DE LA FRAGATA COINCIDE CON LA FILA Y COLUMNA QUE DIO EL USUARIO Y ESA CASILLA NO FUE ATACADA PREVIAMENTE ENTONCES:
                fragata[i].Atacado();
                fragata[i].setDisparado(k);
                M[f1][c1]='X';//EN EL TABLERO SE COLOCA UNA "X" PARA REPRESENTAR QUE ESA POSICION FUE ATACADA
                cout<<"Una fragata fue disparada!!!"<<endl;
                return;//TERMINA LA FUNCION
            }
        }
        }
        for(i=0;i<2;i++){//ESTE FOR ES PARA REFERIRSE A LOS BUQUES
            for(k=0;k<3;k++){//ESTE FOR SE USA PARA REFERIRSE A UNA DE LAS TRES POSICIONES QUE TIENE EL BUQUE
                Fila=buque[i].getF(k);//SE DEFINE LA VARIABLE FILA COMO UNA DE LAS TRES FILAS DEL BUQUE
                Columna=buque[i].getC(k);//SE DEFINE LA VARIABLE COLUMNA COMO UNA DE LAS TRES COLUMNAS
                if(Fila==f1 && Columna==c1 && !buque[i].getDisparado(k)){//SI UNA DE LAS POSICIONES DEL BUQUE COINCIDE CON LA FILA Y COLUMNA QUE DIO EL USUARIO Y ESA CASILLA NO FUE ATACADA PREVIAMENTE ENTONCES:
                    buque[i].Atacado();
                    buque[i].setDisparado(k);
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
        
    