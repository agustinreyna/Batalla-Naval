#include <iostream>
#include <windows.h>
#define color SetConsoleTextAttribute
#include "Bote.h"
#include "Fragata.h"
#include "Buque.h"
#include "Jugador.h"

void menu(){
    cout<<"~~~~~~~~~~~~~~~MENU BATALLA NAVAL~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~Opcion 1.Atacar"<<endl;
    cout<<"~~~Opcion 2.Ceder turno"<<endl;
    cout<<"~~~Opcion 3.Salir del juego"<<endl;
}

int main(int argc, char const *argv[])
{
    Jugador jugador1;
    jugador1.setBotes();
    jugador1.setFragatas();
    jugador1.setBuques();
    int i,j,k;
    do{
        menu();
        cin>>k;
        switch(k)
        {
        case 1:
            jugador1.atacado();
            break;
        
        default:
            break;
        }
    }while(k!=3);
    return 0;
}
