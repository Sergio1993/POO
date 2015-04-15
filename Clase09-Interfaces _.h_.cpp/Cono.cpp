//
//  Cono.cpp
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//
#include <iostream>
#include "Cono.h"

using namespace std;

//metodos accesores
void Cono::setAltura(double alt){
    altura = alt;
}

double Cono::getAltura() const{
    return altura;
}

void Cono::setRadio(double r){
    radio = r;
}
double Cono::getRadio() const{
    return radio;
}

//funciones especificas
int Cono::areaCono(double lado, double arista, double r){
    double area;
    area = (3.14*r*(arista+r));
    return area;
}

void Cono::volumenCono(double r, double h){
    cout << "Volumen del cono: " << (3.14*(r*r)*h)/3 << endl;
}

//Constructores
Cono::Cono(){
    radio = 0;
    altura = 0;
}

Cono::Cono(double r, double a){
    radio = r;
    altura = a;
}

//Destructor
Cono::~Cono(){
    
}
