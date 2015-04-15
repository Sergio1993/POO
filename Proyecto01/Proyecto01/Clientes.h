//
//  Clientes.h
//  Proyecto01
//
//  Created by Sergio Pita on 23/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Proyecto01__Clientes__
#define __Proyecto01__Clientes__

#include <stdio.h>
#include <iostream>
using namespace std;

class Clientes{
    
private:
    string nombre, apellidos, dni;
    int edad;
    
public:
    
    Clientes();
    Clientes(string, string, string, int);
    
    
    void setNombre(string);
    string getNombre() const;
    
    void setApellidos(string);
    string getApellidos() const;
    
    void setDni(string);
    string getDni() const;
    
    void setEdad(int);
    int getEdad() const;
    
    void crearClientes();
    void guardarClientes();
    void listarClientes();
    void anadirClientesFacturas();
    
    ~Clientes();
};
#endif /* defined(__Proyecto01__Clientes__) */
