//
//  Factura.cpp
//  Proyecto01
//
//  Created by Sergio Pita on 23/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "Factura.h"
#include <fstream>

Factura::Factura(){
    
}

Factura::Factura(int i){
    this->identificador = i;
}

void Factura::setIdentificador(int i){
    this->identificador = i;
}

int Factura::getIdentificador() const{
    return this->identificador;
}

void Factura::crearFactura(){
    cout << "Dime el numero de factura que deseas crear" << endl;
    cin >> identificador;
    ofstream myFichero("factura"+to_string(getIdentificador())+".txt", ios::app);
    myFichero << "FACTURA ";
    myFichero << getIdentificador();
    myFichero << "\n";
    myFichero << "prueba\n";
    myFichero.close();
    cout << "La factura ha sido creada" << endl;
}

void Factura::leerFactura(){
    string valores;
    cout << "Dime el numero de factura que deseas leer" << endl;
    cin >> identificador;
    ifstream myFichero2("factura"+to_string(getIdentificador())+".txt");
    if (myFichero2.is_open())
    {
        while ( getline (myFichero2, valores) )
        {
            cout << valores << '\n';
        }
        myFichero2.close();
    }
    
    else cout << "Imposible abrir archivo";
    myFichero2.close();
}

Factura::~Factura(){}