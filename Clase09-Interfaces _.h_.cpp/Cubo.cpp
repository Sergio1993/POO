//
//  Cubo.cpp
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//
#include <iostream>
#include "Cubo.h"
using namespace std;


//metodos accesores
void Cubo::setAltura(int alt){
    altura = alt;
}

int Cubo::getAltura() const{
    return altura;
}

void Cubo::setBase(int b){
    base = b;
}
int Cubo::getBase() const{
    return base;
}

//funciones especificas
int Cubo::areaCubo(int lado){
    int total;
    total = 6*(lado*lado);
    return total;
}

void Cubo::volumenCubo(int lado){
    cout << "Volumen del cubo: " << lado*lado*lado << endl;
}

//Constructores
Cubo::Cubo(){
    base = 0;
    altura = 0;
}

Cubo::Cubo(int b, int a){
    base = b;
    altura = a;
}

//Destructor
Cubo::~Cubo(){
    
}
