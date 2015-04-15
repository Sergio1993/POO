//
//  Persona.cpp
//  Clase11_Loop
//
//  Created by Sergio Pita on 10/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(){
    
}

Persona::Persona(string n, int nPasteles){
    nombre = n;
    numeroPasteles = nPasteles;
}

void Persona::setNombre(string n){
    nombre = n;
}

string Persona::getNombre() const{
    return nombre;
}

void Persona::setNumeroPasteles(int nPasteles){
    numeroPasteles = nPasteles;
}

int Persona::getNumeroPasteles() const {
    return numeroPasteles;
}

Persona::~Persona(){
    
}