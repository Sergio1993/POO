//
//  Profesor.cpp
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "Profesor.h"

Profesor::Profesor(){
    
}

Profesor::Profesor(string nom, string ape, string asig, int e){
    nombre = nom;
    apellido = ape;
    asignatura = asig;
    edad = e;
}

void Profesor::setNombre(string n){
    nombre = n;
}

string Profesor::getNombre() const{
    return nombre;
}

void Profesor::setApellido(string a){
    apellido = a;
}

string Profesor::getApellido() const{
    return apellido;
}

void Profesor::setAsignatura(string a){
    asignatura = a;
}

string Profesor::getAsignatura() const{
    return asignatura;
}

void Profesor::setEdad(int e){
    edad = e;
}

int Profesor::getEdad() const{
    return edad;
}

Profesor::~Profesor(){
    
}