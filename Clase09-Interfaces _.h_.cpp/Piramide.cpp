//
//  Piramide.cpp
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//
#include <iostream>
#include "Piramide.h"
using namespace std;

//metodos accesores
void Piramide::setAltura(int alt){
    altura = alt;
}

int Piramide::getAltura() const{
    return altura;
}

void Piramide::setBase(int b){
    base = b;
}
int Piramide::getBase() const{
    return base;
}

void Piramide::setArista(int ari){
    arista = ari;
}

int Piramide::getArista() const{
    return arista;
}

//funciones especificas
int Piramide::areaPiramide(int lado, int arista){
    double area;
    area = ((lado*lado)+(lado*arista)*2);
    return area;
}

void Piramide::volumenPiramide(int b, int a){
    cout << "Volumen de la Piramide: " << (b*a)/3 << endl;
}

//Constructores
Piramide::Piramide(){
    base = 0;
    altura = 0;
}

Piramide::Piramide(int b, int a, int ari){
    base = b;
    altura = a;
    arista = ari;
}

//Destructor
Piramide::~Piramide(){
    
}