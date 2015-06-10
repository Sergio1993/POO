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
    
    double importe;
    
    cout << "Dime el numero de factura que deseas crear" << endl;
    cin >> identificador;
    ofstream myFichero("factura.csv", ios::app);
    myFichero << "FACTURA ";//PASAR AL METODO CREAR FACTURA EL NOMBRE DEL SEÑOR QUE VA A CREAR LA FACTURA
    myFichero << getIdentificador();
    myFichero << "\n";
    cout << "Dame el importe de la factura" << endl;
    cin >> importe;
    myFichero << "Importe = ";
    myFichero << importe << "\n";
    myFichero << "Importe + IVA = ";
    importe = importe + importe*0.21;
    myFichero << importe;
    myFichero << "\n";
    myFichero.close();
    cout << "La factura ha sido creada" << endl;
}

void Factura::leerFactura(){
    string valores;
    ifstream myFichero2("factura.csv");
    if (myFichero2.is_open())
    {
        while ( getline (myFichero2, valores) )
        {
            cout << valores << '\n';
        }
        myFichero2.close();
    }
    
    else cout << "Imposible abrir archivo\n";
    myFichero2.close();
}

Factura::~Factura(){}