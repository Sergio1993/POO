//
//  main.cpp
//  Objetos
//
//  Created by Sergio Pita on 13/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;
//Tarea 0
//Crea una clase de nombre Jugador.
class Jugador{
    
public:
    
    string equipo;
    string posicion;
    int velocidad;
    
    void pasar(int aciertos, string nombreJugador){
        cout << "El numero de pases realizados durante un partido han sido: " << aciertos << " por el jugador "<< nombreJugador << endl;
    }
    void disparar(int intentos, string nombreJugador){
        cout << "El numero de disparos realizados durante un partido han sido: " << intentos << " por el jugador "<< nombreJugador << endl;
    }
    void entrada(int segadas, string nombreJugador){
        cout << "El numero de entradas realizados durante un partido han sido: " << segadas << " por el jugador "<< nombreJugador << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    
    Jugador cristiano;
    Jugador kross;
    Jugador neuer;
    
    cristiano.equipo = "Real madrid";
    cristiano.posicion = "extremo";
    cristiano.velocidad = 25;
    
    kross.equipo = "Real Madrid";
    kross.posicion = "Medio centro";
    kross.velocidad = 15;
    
    neuer.equipo = "Bayer de Munchen";
    neuer.posicion = "Portero";
    neuer.velocidad = 12;
    
    
    cristiano.pasar(35, "cristiano");
    kross.disparar(3, "kross");
    neuer.entrada(2, "neuer");
    
    return 0;
}
