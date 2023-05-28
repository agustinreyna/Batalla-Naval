#include <iostream>
#include <windows.h>
#define color SetConsoleTextAttribute
#include "Jugador.h"
using namespace std;

    Jugador::Jugador(){
        int i,j;
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                M[i][j]='-';
            }
        }
    }

    bool Jugador::perdio(){
        int i;
        bool perdio=true;

        for(i=0;i<2;i++){
            if(buque[i].getVidas()!=0)perdio=false;
        }

        for(i=0;i<3;i++){
            if(fragata[i].getVidas()!=0)perdio=false;
            if(bote[i].getVidas()!=0)perdio=false;
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
        for(i=0;i<3;i++){
            //bote[i].cargarP(P);
            bote[i].setPosicion(P);
            P[bote[i].getF()][bote[i].getC()]=true;
            M[bote[i].getF()][bote[i].getC()]='O';
        }
    }

    void Jugador::setFragatas(){
        int i,k;
        for(i=0;i<3;i++){
            cout<<"Decime si la fragata va a estar horizontal(0) o vertical(1)"<<endl;
            cin>>k;
            //fragata[i].cargarP(P);
            if(k==0){
                fragata[i].setPosicionH(P);
                P[fragata[i].getF(0)][fragata[i].getC(0)]=true;
                P[fragata[i].getF(1)][fragata[i].getC(1)]=true;
                M[fragata[i].getF(0)][fragata[i].getC(0)]='F';
                M[fragata[i].getF(1)][fragata[i].getC(1)]='F';
            }
            else {
                fragata[i].setPosicionV(P);
                P[fragata[i].getF(0)][fragata[i].getC(0)]=true;
                P[fragata[i].getF(1)][fragata[i].getC(1)]=true;
                M[fragata[i].getF(0)][fragata[i].getC(0)]='F';
                M[fragata[i].getF(1)][fragata[i].getC(1)]='F';
            }
        }
    }

    void Jugador::setBuques(){
        int i,k;
        for(i=0;i<2;i++){
            cout<<"Decime si el buque va a estar horizontal(0) o vertical(1)"<<endl;
            cin>>k;
            //buque[i].cargarP(P);
            if(k==0){
                buque[i].setPosicionH(P);
                P[buque[i].getF(0)][buque[i].getC(0)]=true;
                P[buque[i].getF(1)][buque[i].getC(1)]=true;
                P[buque[i].getF(2)][buque[i].getC(2)]=true;
                M[buque[i].getF(0)][buque[i].getC(0)]='B';
                M[buque[i].getF(1)][buque[i].getC(1)]='B';
                M[buque[i].getF(2)][buque[i].getC(2)]='B';
            }
            else {
                buque[i].setPosicionV(P);
                P[buque[i].getF(0)][buque[i].getC(0)]=true;
                P[buque[i].getF(1)][buque[i].getC(1)]=true;
                P[buque[i].getF(2)][buque[i].getC(2)]=true;
                M[buque[i].getF(0)][buque[i].getC(0)]='B';
                M[buque[i].getF(1)][buque[i].getC(1)]='B';
                M[buque[i].getF(2)][buque[i].getC(2)]='B';
            }
        }
    }

    void Jugador::mostrarBotes(){
        int i;
        for(i=0;i<3;i++){
            bote[i].mostrar();
            cout<<"Y tiene "<<bote[i].getVidas()<<" vidas"<<endl;
        }
    }

    void Jugador::mostrarFragatas(){
        int i;
        for(i=0;i<3;i++){
            fragata[i].mostrar();
            cout<<"Y tiene "<<fragata[i].getVidas()<<" vidas"<<endl;
        }
    }

    void Jugador::mostrarBuques(){
        int i;
        for(i=0;i<2;i++){
            buque[i].mostrar();
            cout<<"Y tiene "<<buque[i].getVidas()<<" vidas"<<endl;
        }
    }

    void Jugador::atacado(int f1,int c1){
        int k,i,Fila,Columna;
        for(k=0;k<3;k++){
            if(bote[k].getF()==f1 && bote[k].getC()==c1 && !bote[k].getDisparado()){
                bote[k].Atacado();
                bote[k].setDisparado();
                M[f1][c1]='X';
                cout<<"Un bote fue disparado!!!"<<endl;
                return;
            }
        }

        for(i=0;i<3;i++){
            for(k=0;k<2;k++){
            Fila=fragata[i].getF(k);
            Columna=fragata[i].getC(k);
            if(Fila==f1 && Columna==c1 && !fragata[i].getDisparado(k)){
                fragata[i].Atacado();
                fragata[i].setDisparado(k);
                M[f1][c1]='X';
                cout<<"Una fragata fue disparada!!!"<<endl;
                return;
            }
        }
        }
        for(i=0;i<2;i++){
            for(k=0;k<3;k++){
                Fila=buque[i].getF(k);
                Columna=buque[i].getC(k);
                if(Fila==f1 && Columna==c1 && !buque[i].getDisparado(k)){
                    buque[i].Atacado();
                    buque[i].setDisparado(k);
                    M[f1][c1]='X';
                    cout<<"Un buque fue disparado!!!"<<endl;
                    return;
                }
            }
        }
        cout<<"Agua!!!"<<endl;
    }

    void Jugador::mostrarM(){
        int i,j;
        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                cout<<"|";
                if(M[i][j]=='B')color(hConsole,1);
                else if(M[i][j]=='F')color(hConsole,2);
                else if(M[i][j]=='O')color(hConsole,4);
                else color(hConsole,0);
                cout<<M[i][j];
                cout<<"|";
            }
            cout<<endl;
        }
        color(hConsole,7);
    }
        
    