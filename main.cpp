#include <iostream>
#include <windows.h>//LIBRERIA PARA USAR FUNCIONES PARA LA CONSOLA
#include "Bote.h"
#include "Fragata.h"
#include "Buque.h"
#include "Jugador.h"

void menu(int turno){//FUNCION MENU
    cout<<"~~~~~~~~~~~~~~~MENU BATALLA NAVAL~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~Turno del jugador "<<turno+1<<"~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~Opcion 1.Atacar"<<endl;
    cout<<"~~~Opcion 2.Ceder turno"<<endl;
    cout<<"~~~Opcion 3.Mostrar Tablero"<<endl;
    cout<<"~~~Opcion 4.Salir del juego   "<<endl;
}

int cambioTurno(int turno){//FUNCION QUE CAMBIA EL TURNO
    if(turno==0)turno++;
    else if(turno==1)turno--;
    return turno;
}

int main(int argc, char const *argv[])
{
    /*Jugador jugador[2];//SE DECLARA UN ARREGLO DE 2 JUGADORES
    int i,j,k,fila,columna,turno=0;
    for(i=0;i<2;i++){//SE PIDE LA INFORMACION DE CADA JUGADOR
        cout<<"INFORMACION DEL JUGADOR "<<i+1<<endl;
        jugador[i].setNombre();
        jugador[i].setBotes();
        jugador[i].setFragatas();
        jugador[i].setBuques();
    }

    do{
        menu(turno);
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
    }while(k!=4);*/
    Jugador jugador;
    jugador.setBotes();
    jugador.setFragatas();
    jugador.mostrarBotes();
    jugador.mostrarFragatas();
    return 0;
}
