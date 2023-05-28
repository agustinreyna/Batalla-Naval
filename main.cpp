#include <iostream>
#include <windows.h>
#include "Bote.h"
#include "Fragata.h"
#include "Buque.h"
#include "Jugador.h"

void menu(int turno){
    cout<<"~~~~~~~~~~~~~~~MENU BATALLA NAVAL~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~Turno del jugador "<<turno+1<<"~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~Opcion 1.Atacar"<<endl;
    cout<<"~~~Opcion 2.Ceder turno"<<endl;
    cout<<"~~~Opcion 3.Mostrar Tablero"<<endl;
    cout<<"~~~Opcion 4.Salir del juego   "<<endl;
}

int cambioTurno(int turno){
    if(turno==0)turno++;
    else if(turno==1)turno--;
    return turno;
}

int main(int argc, char const *argv[])
{
    /*Jugador jugador1;
    jugador1.setBotes();
    jugador1.setFragatas();
    jugador1.setBuques();
    int i,j,k;*/
    Jugador jugador[2];
    int i,j,k,fila,columna,turno=0;
    for(i=0;i<2;i++){
        cout<<"INFORMACION DEL JUGADOR "<<i+1<<endl;
        jugador[i].setNombre();
        jugador[i].setBotes();
        jugador[i].setFragatas();
        jugador[i].setBuques();
    }

    do{
        menu(turno);
        cin>>k;
        system("cls");
        switch(k)
        {
        case 1:
            cout<<"Decime la fila y la columna en la que queres atacar: "<<endl;
            cin>>fila;
            cin>>columna;
            turno=cambioTurno(turno);
            jugador[turno].atacado(fila,columna);
            break;
        case 2:
            turno=cambioTurno(turno);
            break; 
        case 3:
            jugador[turno].mostrarM();
            break;
        default:
            break;
        }
        if(jugador[turno].perdio()){
            cout<<"El jugador "<<jugador[turno].getNombre()<<" perdio!"<<endl;
            turno=cambioTurno(turno);
            cout<<"El jugador "<<jugador[turno].getNombre()<<" gano!"<<endl;
            return 0;
        }
    }while(k!=4);
    return 0;
}
