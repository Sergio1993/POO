//
//  Clientes.cpp
//  Proyecto01
//
//  Created by Sergio Pita on 23/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "Clientes.h"
#include <fstream>
using namespace std;

Clientes::Clientes(){
    
}

Clientes::Clientes(string n, string a, string d, int e){
    this->nombre = n;
    this->apellidos = a;
    this->dni = d;
    this->edad = e;
}

void Clientes::setNombre(string n){
    this->nombre = n;
}

string Clientes::getNombre() const{
    return this->getNombre();
}

void Clientes::setApellidos(string a){
    this->apellidos = a;
}

string Clientes::getApellidos() const{
    return this->apellidos;
}

void Clientes::setDni(string d){
    this->dni = d;
}

string Clientes::getDni() const {
    return this->dni;
}

void Clientes::setEdad(int e){
    this->edad = e;
}

int Clientes::getEdad() const{
    return this->edad;
}

void Clientes::crearClientes(){
     string valores, nombre, apellido, dni, fecha, respuesta;
    
     ofstream myFichero("clientes.csv", ios::app);
     
     if (myFichero.is_open())
     {
     cout << "Dame tu nombre" << endl;
     cin >> nombre;
     myFichero << nombre << " ";
     cout << "Dame tu primer apellido" << endl;
     cin >> apellido;
     myFichero << apellido << ", ";
     cout << "Dame tu dni" << endl;
     cin >> dni;
     myFichero << dni << ", ";
     cout << "Dame tu fecha de nacimiento" << endl;
     cin >> fecha;
     myFichero << fecha << "\n";
     }
     else cout << "Imposible abrir archivo";
}

void Clientes::listarClientes(){
    string valores;
    ifstream myFichero2 ("clientes.txt");
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
Clientes::~Clientes(){}