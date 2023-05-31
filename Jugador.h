#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "Buque.h"
#include "Fragata.h"
#include "Bote.h"
using namespace std;

class Jugador{
    private:
        char M[10][10];//MATRIZ QUE REPRESENTA EL TABLERO
        bool P[10][10]={};//MATRIZ QUE SE USA PARA CHEQUEAR QUE LOS BARCOS SE POSICIONES CORRECTAMENTE.LA FORMA EN LA QUE ESTA INICIALIZADA ES PARA QUE TODOS LOS VALORES INICIALES SEAN FALSE
        Buque buque[2];//CADA JUGADOR TIENE DOS BUQUES
        Fragata fragata[3];//CADA JUGADOR TIENE TRES FRAGATAS
        Bote bote[3];//CADA JUGADOR TIENE TRES BOTES
        string nombre;
    public:
        Jugador();
        bool perdio();//DEVUELVE TRUE SI ES QUE EL JUGADOR PERDIO
        void setNombre();
        string getNombre();
        void setBotes();//SETEA CADA UNO DE LOS TRES BOTES
        void setFragatas();//SETEA CADA UNO DE LAS TRES FRAGATAS
        void setBuques();//SETEA CADA UNO DE LOS DOS BUQUES
        void mostrarBotes();//MUESTRA LA POSICION Y LA VIDA DE LOS BOTES
        void mostrarFragatas();//MUESTRA LAS POSICIONES Y LA VIDA DE LAS FRAGATAS
        void mostrarBuques();//MUESTRA LAS POSICIONES Y LA VIDA DE LOS BUQUES
        void atacado(int,int);//FUNCION PARA ATACAR.DE PARAMETRO USA UNA FILA Y UNA COLUMNA PARA ATACAR DADAS POR EL USUARIO
        void mostrarM();//FUNCION PARA MOSTRAR TABLERO Y USA COLORES :)
};
#endif