#include <iostream>
#include <windows.h>//LIBRERIA PARA USAR FUNCIONES PARA LA CONSOLA
#include "JugadorPersona.h"
#include "JugadorCPU.h"
#include <cstdlib>
#include <ctime>
using namespace std;

void menu0(int turno){//FUNCION MENU0
    cout<<"~~~~~~~~~~~~~~~MENU BATALLA NAVAL~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~Turno del jugador "<<turno+1<<"~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~Opcion 1.Atacar"<<endl;
    cout<<"~~~Opcion 2.Ceder turno"<<endl;
    cout<<"~~~Opcion 3.Mostrar Tablero"<<endl;
    cout<<"~~~Opcion 4.Salir del juego   "<<endl;
}

void menu1(){//FUNCION MENU1
    cout<<"~~~~~~~~~~~~~~~MENU BATALLA NAVAL~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~Turno del jugador~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~Opcion 1.Atacar"<<endl;
    cout<<"~~~Opcion 2.Ceder turno"<<endl;
    cout<<"~~~Opcion 3.Mostrar Tablero"<<endl;
    cout<<"~~~Opcion 4.Mostrar Tablero del rival"<<endl;
    cout<<"~~~Opcion 5.Salir del juego   "<<endl;
}

int cambioTurno(int turno){//FUNCION QUE CAMBIA EL TURNO
    if(turno==0)turno++;
    else if(turno==1)turno--;
    return turno;
}

int main(int argc, char const *argv[])
{
    JugadorPersona jugador[2];//SE DECLARA UN ARREGLO DE 2 JUGADORES
    int i,j,k,fila,columna,modo,turno=0,cont=0;
    JugadorCPU bot;
     while(cont<8){
        i = rand() % 10;
        j = rand() % 10;
        cont=bot.setBarcos(i,j,cont);
    }
    do{
        cout<<"0 Para jugar contra otro jugador"<<endl;
        cout<<"1 Para jugar contra la CPU"<<endl;
        cin>>modo;
    }while(modo!=1 && modo!=0);
    switch(modo)
    {
    case 0:
        for(i=0;i<2;i++){//SE PIDE LA INFORMACION DE CADA JUGADOR
        cout<<"INFORMACION DEL JUGADOR "<<i+1<<endl;
        jugador[i].setNombre();
        jugador[i].setBarcos();
    }

    do{
        menu0(turno);
        cin>>k;
        system("cls");//SE LIMPIA LA CONSOLA PARA QUE QUEDE MAS PROLIJO
        switch(k)
        {
        case 1://ATACAR
            do{
            cout<<"Decime la fila y la columna en la que queres atacar: "<<endl;
            cin>>fila;
            cin>>columna;
            }while(fila>9 || fila<0 || columna>9 || columna<0);//ESTO ES PARA QUE EL JUGADOR NO PUEDA ELEGIR UNA CASILLA QUE NO ESTE DENTRO DE LA 10X10
            turno=cambioTurno(turno);
            jugador[turno].atacado(fila,columna);//SE ATACA A LA CASILLA ELEGIDA,DESPUES SE VE SI ES AGUA O UN BARCO
            break;
        case 2:
            turno=cambioTurno(turno);//SOLO SE CAMBIA DE TURNO
            break; 
        case 3:
            jugador[turno].mostrarM();//SE MUESTRA EL TABLERO
            break;
        default:
            break;
        }
        if(jugador[turno].perdio()){//ESTE IF SE CHEQUEA AL FINAL DE CADA ITERACION SI ES QUE EL JUGADOR PERDIO
            cout<<"El jugador "<<jugador[turno].getNombre()<<" perdio!"<<endl;
            turno=cambioTurno(turno);
            cout<<"El jugador "<<jugador[turno].getNombre()<<" gano!"<<endl;
            return 0;
        }
    }while(k!=4);
    return 0;
        break;
    
    case 1:

        cout<<"INFORMACION DEL JUGADOR "<<endl;
        jugador[0].setNombre();
        jugador[0].setBarcos();
    

    do{
        menu1();
        cin>>k;
        system("cls");//SE LIMPIA LA CONSOLA PARA QUE QUEDE MAS PROLIJO
        switch(k)
        {
        case 1://ATACAR
            do{
            cout<<"Decime la fila y la columna en la que queres atacar: "<<endl;
            cin>>fila;
            cin>>columna;
            }while(fila>9 || fila<0 || columna>9 || columna<0);//ESTO ES PARA QUE EL JUGADOR NO PUEDA ELEGIR UNA CASILLA QUE NO ESTE DENTRO DE LA 10X10
            bot.atacado(fila,columna);//SE ATACA A LA CASILLA ELEGIDA,DESPUES SE VE SI ES AGUA O UN BARCO
            i = rand() % 10;
            j = rand() % 10;
            jugador[0].atacado(i,j);
            break;
        case 2:
            i = rand() % 10;
            j = rand() % 10;
            jugador[0].atacado(i,j);
            break; 
        case 3:
            jugador[turno].mostrarM();//SE MUESTRA EL TABLERO
            break;
        case 4:
            bot.mostrarM();
            break;
        default:
            break;
        }
        if(jugador[0].perdio()){//ESTE IF SE CHEQUEA AL FINAL DE CADA ITERACION SI ES QUE EL JUGADOR PERDIO
            cout<<"El jugador "<<jugador[0].getNombre()<<" perdio!"<<endl;
            cout<<"El jugador "<<bot.getNombre()<<" gano!"<<endl;
            return 0;
        }
        else if(bot.perdio()){
            cout<<"El jugador "<<bot.getNombre()<<" perdio!"<<endl;
            cout<<"El jugador "<<jugador[0].getNombre()<<" gano!"<<endl;
            return 0;
        }

    }while(k!=5);
        break;

    default:
        return 0 ;   
        break;
    }
    return 0;
}
