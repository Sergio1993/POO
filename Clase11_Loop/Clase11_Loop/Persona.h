//
//  Persona.h
//  Clase11_Loop
//
//  Created by Sergio Pita on 10/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase11_Loop__Persona__
#define __Clase11_Loop__Persona__

#include <stdio.h>
#include <iostream>
using namespace std;

class Persona{
  
private:
    string nombre;
    int numeroPasteles;
public:
    Persona();
    Persona(string, int);
    ~Persona();
    
    void setNombre(string);
    string getNombre() const;
    
    void setNumeroPasteles(int);
    int getNumeroPasteles() const;
    
};

#endif /* defined(__Clase11_Loop__Persona__) */
