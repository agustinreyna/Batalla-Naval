#include <iostream>
#include "JugadorCPU.h"
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

    JugadorCPU::JugadorCPU(){
        bot.setNombreCPU();
    }

    void JugadorCPU::mostrarM(){
        bot.mostrarM();
    }

    int JugadorCPU::setBarcos(int i,int j,int k){
        if(!bot.getP(i,j) && k<3){
        bot.getbarco(k).getPosicion(0).setPosicion(i,j);
        bot.getbarco(k).setVidas(1);    
        bot.setP(i,j); 
        bot.setM(i,j,'O'); 
        k++;
        return k;
        }
    
        if(!bot.getP(i,j) && !bot.getP(i,j+1) && j<=8 && k>=3 && k<5){
        bot.getbarco(k).getPosicion(0).setPosicion(i,j);
        bot.getbarco(k).getPosicion(1).setPosicion(i,j+1);
        bot.getbarco(k).setVidas(2);    
        bot.setP(i,j);
        bot.setP(i,j+1); 
        bot.setM(i,j,'F');
        bot.setM(i,j+1,'F');  
        k++;
        return k;
        }

        if(!bot.getP(i,j) && !bot.getP(i+1,j) && i<=8 && k==5){
        bot.getbarco(k).getPosicion(0).setPosicion(i,j);
        bot.getbarco(k).getPosicion(1).setPosicion(i+1,j);
        bot.getbarco(k).setVidas(2);    
        bot.setP(i,j);
        bot.setP(i+1,j); 
        bot.setM(i,j,'F');
        bot.setM(i+1,j,'F');  
        k++;
        return k;
        }

        if(!bot.getP(i,j) && !bot.getP(i+1,j) && !bot.getP(i+2,j) && i<=7 && k==6){
        bot.getbarco(k).getPosicion(0).setPosicion(i,j);
        bot.getbarco(k).getPosicion(1).setPosicion(i+1,j);
        bot.getbarco(k).getPosicion(1).setPosicion(i+2,j);
        bot.getbarco(k).setVidas(3);    
        bot.setP(i,j);
        bot.setP(i+1,j); 
        bot.setP(i+2,j); 
        bot.setM(i,j,'B');
        bot.setM(i+1,j,'B');
        bot.setM(i+2,j,'B');    
        k++;
        return k;
        }

        if(!bot.getP(i,j) && !bot.getP(i,j+1) && !bot.getP(i,j+2) && j<=7 && k==7){
        bot.getbarco(k).getPosicion(0).setPosicion(i,j);
        bot.getbarco(k).getPosicion(1).setPosicion(i,j+1);
        bot.getbarco(k).getPosicion(1).setPosicion(i,j+2);
        bot.getbarco(k).setVidas(3);    
        bot.setP(i,j);
        bot.setP(i,j+1); 
        bot.setP(i,j+2); 
        bot.setM(i,j,'B');
        bot.setM(i,j+1,'B');
        bot.setM(i,j+2,'B');    
        k++;
        return k;
        }
        return k;
        
    }

    void JugadorCPU::atacado(int f1,int c1){
        bot.atacado(f1,c1);
    }

    bool JugadorCPU::perdio(){
        return bot.perdio();
    }

    string JugadorCPU::getNombre(){
        return bot.getNombre();
    }