//
//  personaje.cpp
//  Objetos-Constructor_Destructor
//
//  Created by Sergio Pita on 17/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "personaje.h"
#include <iostream>

void Persona::setDni(int dni){
    DNI = dni;
}

int Persona::getDni(){
    return DNI;
}

void Persona::setNombre(string nom){
    nombre = nom;
}
string Persona::getNombre(){
    return nombre;
}
