//
//  Cilindro.cpp
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//
#include <iostream>
#include "Cilindro.h"
using namespace std;

//metodos accesores
void Cilindro::setAltura(double alt){
    altura = alt;
}

double Cilindro::getAltura() const{
    return altura;
}

void Cilindro::setRadio(double r){
    radio = r;
}
double Cilindro::getRadio() const{
    return radio;
}

//funciones especificas
double Cilindro::areaCilindro(double r, double h){
    return (2*3.14)*r*(r+h);
}

void Cilindro::volumenCilindro(double radio, double altura){
    cout << "Volumen del cilindro: " << 3.14*(radio*radio)*altura << endl;
}

//Constructores
Cilindro::Cilindro(){
    radio = 0;
    altura = 0;
}

Cilindro::Cilindro(double r, double a){
    radio = r;
    altura = a;
}

//Destructor
Cilindro::~Cilindro(){
    
}