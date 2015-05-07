//
//  personaje.h
//  Objetos-Constructor_Destructor
//
//  Created by Sergio Pita on 17/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Objetos_Constructor_Destructor__personaje__
#define __Objetos_Constructor_Destructor__personaje__

#include <iostream>
#include <stdio.h>

using namespace std;

class Persona{
private:
    int DNI;
    string nombre;
    
    
public:
    void setDni(int d);
    int getDni();
    
    void setNombre(string nom);
    string getNombre();
    
    Persona (int dni){
        DNI = dni;
    }
    
    Persona (int dni, string nom){
        DNI = dni;
        nombre = nom;
    }
    
    ~Persona(){
        
    }
    
};

#endif /* defined(__Objetos_Constructor_Destructor__personaje__) */
