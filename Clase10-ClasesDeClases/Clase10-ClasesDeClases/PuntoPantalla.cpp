//
//  PuntoPantalla.cpp
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "PuntoPantalla.h"
#include <iostream>
using namespace std;



//metodos accesores
void PuntoPantalla::setColor(string color){
    color = color;
}

string PuntoPantalla::getColor() const{
    return color;
}

void PuntoPantalla::setEjex(int x){
     coordenada.ejex = x;
}

int PuntoPantalla::getEjex() const{
    return coordenada.ejex;
}

void PuntoPantalla::setEjey(int y){
    coordenada.ejey = y;
}

int PuntoPantalla::getEjey() const{
    return coordenada.ejey;
}


//constructores
PuntoPantalla::PuntoPantalla(){
    
}

PuntoPantalla::PuntoPantalla(int x, int y, string c):coordenada(x, y){
    x = x;
    y = y;
    color = c;
}

//destructor
PuntoPantalla::~PuntoPantalla(){
    
}