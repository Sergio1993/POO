//
//  PuntoPantalla.h
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase10_ClasesDeClases__PuntoPantalla__
#define __Clase10_ClasesDeClases__PuntoPantalla__

#include <iostream>
#include "Coordinate.h"
using namespace std;

class PuntoPantalla{
private:
    Coordinate coordenada;
    string color;
    
public:
    //constructores
    PuntoPantalla();
    PuntoPantalla(int, int,string);
    
    //metodos accesores
    void setColor(string);
    string getColor() const;
    
    void setEjex(int);
    int getEjex() const;
    
    void setEjey(int);
    int getEjey() const;
    
    
    //destructor
    ~PuntoPantalla();
};

#endif /* defined(__Clase10_ClasesDeClases__PuntoPantalla__) */
